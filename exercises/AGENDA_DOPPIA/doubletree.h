#ifndef DOUBLETREE_H 
#define DOUBLETREE_H 

#include "persona.h"
#include "tree.h"

struct doubletree 
{ 
  tree  no;
  tree  co;
};

void init(doubletree &);
void inserisci(doubletree &,persona *);
void stampa_ordinata_cognome(doubletree);
void stampa_ordinata_nome(doubletree);

persona * ricerca_per_nome(char *, doubletree);
persona * ricerca_per_cognome(char *, doubletree);

#endif
