/*
  Scrivere un programma che riceva in ingresso uno o piu' parametri,
  di cui il primo sia un numero intero. Il programma classifichera'
  tutti i parametri dopo il primo in due gruppi, in base alla loro
  lunghezza: "piu' lunghi" o "piu' corti o uguali" rispetto al numero
  di cui sopra.
  Il programma stampa i due gruppi di parametri separatamente.
  Utilizzare, adattandola allo scopo, la libreria "struct_queue.h"
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
#include "02-struct_queue_stringhe.h"

using namespace std;

int main(int argc, char* argv[]) {
  if(argc < 3) {
    cerr << "Troppo pochi argomenti.\n";
    return -1;
  }
  int n_inf = 0, n_sup = 0;
  queue inferiori, superiori;
  init(inferiori);
  init(superiori);
  int soglia = atoi(argv[1]);
  for(int i = 2; i < argc; i++) {
    if(strlen(argv[i]) <= soglia) {
      enqueue(argv[i], inferiori);
    } else {
      enqueue(argv[i], superiori);
    }
  }
  // Stampa
  cout << "Inferiori: ";
  print(inferiori);
  cout << "Superiori: ";
  print(superiori);
  // Deallocazione
  deinit(inferiori);
  deinit(superiori);
  return 0;
}
