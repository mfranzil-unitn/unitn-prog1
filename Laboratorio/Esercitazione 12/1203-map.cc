#include "03-map.h"

static int find_for_key(const Map& m, int key);

void init (Map & m, int dim) {
  m.dim = dim;
  m.array = new key_value[dim];
  // Imposta tutti gli elementi dell'array
  // come "vuoti"
  for(int i = 0; i < m.dim; i++) {
    m.array[i].key = -1;
  }
}

int get(const Map & m, int key) {
  // Valore di default (corrisponde a
  // non aver trovato la chiave nella Mappa)
  int ris = -1;
  int index = find_for_key(m, key);
  // Se ho trovato la chiave, recupero il valore
  // corrispondente
  if(index >= 0) {
    ris = m.array[index].value;
  }
  return ris;
}

void set(Map & m, int key, int value) {
  int index = find_for_key(m, key);
  // Se non ho trovato la chiave,
  // aggiungo una nuova coppia chiave-valore
  if(index < 0) {
    // Cerco una posizione libera, cioe'
    // la prima con chiave uguale a -1
    index = find_for_key(m, -1);
    // Se non la trovo, non faccio nulla
    // al prossimo if
  }
  if(index >= 0) {
    m.array[index].key = key;
    m.array[index].value = value;
  }
}

void deinit (Map & m) {
  m.dim = 0;
  delete[] m.array;
}

static int find_for_key(const Map& m, int key) {
  int index = -1;
  bool found = false;
  for(int i = 0; i < m.dim && !found; i++) {
    if(m.array[i].key == key) {
      index = i;
      found = true;
    }
  }
  return index;
}
