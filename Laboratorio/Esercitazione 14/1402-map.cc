/*
  Implementazione del tipo mappa, con la solita semantica
  delle funzioni, questa volta pero' tramite un albero.
  Delle tre implementazioni presentate, la piu' "performante"
  dal punto di vista della velocita' della ricerca.
*/

#include <cstddef>
#include "02-map.h"
#include "02-tree.h"

// Funzione di utilita', locale a questo file
static tree find_for_key(const Map& m, int key);

void init (Map & m) {
  // Inizializza l'indice (un albero binario)
  // che implementa la mappa
  init(m.index);
}

int get(const Map & m, int key) {
  // Valore di default (corrisponde a
  // non aver trovato la chiave nella Mappa)
  int res = -1;
  // Ricerca l'elemento corrispondente alla
  // chiave cercata
  tree t = find_for_key(m, key);
  // Se ho trovato qualcosa, ritorno
  // il valore corrispondente
  if(t != NULL) {
    res = t -> kv -> value;
  }
  return res;
}

void set(Map & m, int key, int value) {
  // Ricerca l'elemento corrispondente alla
  // chiave da modificare
  tree t = find_for_key(m, key);
  // Se non ho trovato la chiave,
  // aggiungo una nuova coppia chiave-valore
  if(t == NULL) {
    // Si suppone che le allocazioni vadano sempre
    // a buon fine
    key_value* kv = new key_value;
    kv -> key = key;
    kv -> value = value;
    // Ora l'elemento va inserito nell'albero
    m.index = inserisci(m.index, kv);
  } else {
    // In questo caso, imposto il valore 
    // corrispondente alla chiave data
    t -> kv -> value = value;
  }
}

void deinit (Map & m) {
  // Deinizializza la mappa;
  // mantenuta per retrocompatibilita',
  // in realta' non fa nulla
}

static tree find_for_key(const Map& m, int key) {
  // Sfrutto l'indice per effettura la ricerca;
  // nel caso di default non trovo la chiave
  return cerca(m.index, key);
}
