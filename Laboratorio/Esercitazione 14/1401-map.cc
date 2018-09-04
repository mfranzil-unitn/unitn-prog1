/*
  Implementazione del tipo "mappa chiave-valore"
  come "lista linkata", allocata dinamicamente in memoria.
  E' stata mantenuta la struttura delle chiamate e la semantica
  dell'implementazione precedente, basata su array dinamici.
*/
#include <cstddef>
#include "01-map.h"

// Funzione di utilita', locale a questo file
static map_item* find_for_key(const Map& m, int key);

void init (Map & m) {
  // Inizializza la lista semplice
  // che implementa la mappa
  m.first = NULL;
}

int get(const Map & m, int key) {
  // Valore di default (corrisponde a
  // non aver trovato la chiave nella Mappa)
  int res = -1;
  // Ricerca l'elemento corrispondente alla
  // chiave cercata
  map_item* item = find_for_key(m, key);
  // Se ho trovato qualcosa, ritorno
  // il valore corrispondente
  if(item != NULL) {
    res = item -> elem -> value;
  }
  return res;
}

void set(Map & m, int key, int value) {
  // Ricerca l'elemento corrispondente alla
  // chiave da modificare
  map_item* item = find_for_key(m, key);
  // Se non ho trovato la chiave,
  // aggiungo una nuova coppia chiave-valore
  if(item == NULL) {
    // Si suppone che le allocazioni vadano sempre
    // a buon fine
    item = new map_item;
    item -> elem = new key_value;
    item -> elem -> key = key;
    // Ora l'elemento va inserito nella lista
    item -> next = m.first;
    m.first = item;
  }
  // In ogni caso, imposto il valore 
  // corrispondente alla chiave data
  item -> elem -> value = value;
}

void deinit (Map & m) {
  // Dealloca ogni elemento della lista
  // semplice che implementa la mappa
  map_item* i = m.first;
  while(i != NULL) {
    delete i -> elem;
    i = i -> next;
  }
}

static map_item* find_for_key(const Map& m, int key) {
  // Nel caso di default non trovo la chiave
  map_item *res = NULL, *i = m.first;
  // Scorro l'intera lista, ma esco subito
  // se trovo la chiave
  bool trovato = false;
  while(i != NULL && !trovato) {
    if(i -> elem -> key == key) {
      res = i;
      trovato = true;
    }
    i = i -> next;
  }
  return res;
}
