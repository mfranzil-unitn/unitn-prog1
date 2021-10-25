#ifndef TREE_H 
#define TREE_H 

/////////////////////////////////////////////////////////////////
// NOTA: utilizza versione "parametrica" sul TIPO del contenuto
// per "parametrizzare" il tipo del contenuto:
// - includere header del file tipo contenuto   
//   ES: #include "persona.h") 
//
// Nel corrispondente header file (e corrispondente .cc) e' necessario: 
// - definire tipo "contenuto" 
//   ES: typedef persona * contenuto; 
// - definire tipo "chiave" 
//   ES: typedef char * chiave; 
// - definire funzione "chiaveDi" 
//   ES: chiave chiaveDi(persona * p);  
// - definire funzione "confronta" 
//   ES: int confronta(chiave c,persona * v1); 
// - definire tipo "stampa" 
//   ES: void stampa(persona * p); 
/////////////////////////////////////////////////////////////////

#include "persona.h"

/////////////////////////////////////////////////////////////////

enum retval {FAIL,OK};

struct node;

typedef node * tree;

struct node 
{  
  contenuto item;  
  tree left;  
  tree right;
};

void init(tree &);
bool nullp(const tree & );
retval insert(tree &, contenuto);
tree cerca (const tree &,chiave);
void print_ordered(const tree &);
void print_indented(const tree &);


#endif
