using namespace std;
#include <iostream>
#include <cstring>

#include "persona.h"
#include "tree.h"
#include "doubletree.h"

void init(doubletree & b) {
  init_tree(b.no);
  init_tree(b.co);
}

void deinit(doubletree & b) {
  deinit_tree(b.no);
  deinit_tree(b.co);
}

void inserisci(doubletree & b, persona * p) {
  b.co = inserisci_cognome(b.co,p);
  b.no = inserisci_nome(b.no,p);
}

void stampa_ordinata_nome(doubletree b) {
  stampa_ordinata(b.no);
}

void stampa_ordinata_cognome(doubletree b) {
  stampa_ordinata(b.co);
}

persona * ricerca_per_nome(char * nome, doubletree b) {
  tree tmp;
  tmp = cerca_nome(b.no,nome);
  if (tmp==NULL)
    return NULL;
  return tmp->p;
}

persona * ricerca_per_cognome(char * cognome, doubletree b) {
  tree tmp;
  tmp = cerca_cognome(b.co,cognome);
  if (tmp==NULL)
    return NULL;
  return tmp->p;
}
