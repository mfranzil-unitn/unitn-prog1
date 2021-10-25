#ifndef PERSONA_H
#define PERSONA_H

using namespace std;
#include <iostream>
#include <cstring>

const int MAX_DIM = 40;

struct persona {
  char  nome[MAX_DIM];
  char  cognome[MAX_DIM];
  char  indirizzo[MAX_DIM];
  int ntel;
};

typedef persona * contenuto;
typedef char * chiave;
typedef enum {NOME,COGNOME}  modo;

extern modo modalita;

persona * crea_persona(char * nome,char *, char *,int);
persona * leggi_persona();
void stampa(persona * p);

chiave chiaveDi(persona * p);
int confronta(chiave c,persona * v1);

void modalita_cognome();
void modalita_nome();


#endif
