#ifndef TREE_H 
#define TREE_H 

/////////////////////////////////////////////////////////////////
// NOTA: utilizza versione "parametrica" sul TIPO del contenuto
// per "parametrizzare" il tipo del contenuto:
// - includere header del file tipo contenuto   
//   ES: #include "persona.h") 
// - ridefinire tipo "contenuto" 
//   ES: typedef persona * contenuto; 
//
// Nel corrispondente header file (e corrispondente .cc) e' necessario: 
// - definire tipo "chiave" 
//   ES: typedef char * chiave; 
// - definire funzione "chiaveDi" 
//   ES: chiave chiaveDi(persona * p);  
// - definire funzione "confronta" 
//   ES: int confronta(chiave c,persona * v1); 
// - definire tipo "stampa" 
//   ES: void stampa(persona * p); 
// - ridefinire valore CONTENUTO_NULLO 
/////////////////////////////////////////////////////////////////

#include "char.h"
typedef char contenuto;
const contenuto CONTENUTO_NULLO = '\0';

/////////////////////////////////////////////////////////////////


enum retval {FAIL,OK};

const int MAXSIZE = 100;

// "puntatore"
struct tree {
  char * array;
  int pos;
};


void init(tree &);
bool nullp(const tree & );
retval insert(tree &, contenuto);
tree cerca (const tree &,chiave);
void print_ordered(const tree &);
void print_indented(const tree &);

#endif
