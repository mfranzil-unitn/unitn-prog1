using namespace std;
#include <iostream>
#include <cstring>

#include "persona.h"
#include "tree.h"
#include "doubletree.h"

modo modalita;


void init(doubletree & b) {
  init(b.no);
  init(b.co);
}

void inserisci(doubletree & b, persona * p) {
  modalita_cognome();
  insert(b.co,p);
  modalita_nome();
  insert(b.no,p);
}

void stampa_ordinata_nome(doubletree b) {
  print_ordered(b.no);
}

void stampa_ordinata_cognome(doubletree b) {
  print_ordered(b.co);
}

persona * ricerca_per_nome(char * nome, doubletree b) {
  tree tmp;
  modalita_nome();
  tmp = cerca(b.no,nome);
  if (tmp==NULL)
    return NULL;
  return tmp->item;
}

persona * ricerca_per_cognome(char * cognome, doubletree b) {
  tree tmp;
  modalita_cognome();
  tmp = cerca(b.co,cognome);
  if (tmp==NULL)
    return NULL;
  return tmp->item;
}

