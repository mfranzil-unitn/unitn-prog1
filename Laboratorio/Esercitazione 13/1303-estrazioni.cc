/*
  Scrivere un programma che simula l'estrazione di n
  ruote del lotto. Ogni ruota contiene i numeri dall'uno
  al novanta, e se ne estraggono 5 a volta. Gli argomenti 
  passati a riga comando dall'utente sono i nomi delle ruote,
  e ne determinano anche il numero.
  Implementare le ruote tramite pile popolate in modo
  casuale.
  Impiegare la libreria "struct_stack.h" (questa volta inalterata).
*/

#include <iostream>
#include <cstdlib>
#include "struct_stack.h"

using namespace std;

const int NUMERI_MAX = 90;
const int NUMERI_PER_ESTRAZIONE = 5;

void popolaCasuale(stack& s, int step);
void estrai(int quanti, stack ruota);

int main(int argc, char* argv[]) {
  if(argc < 2) {
    cerr << "Introdurre almeno una ruota.\n";
    exit(-1);
  }
  int n_ruote = argc - 1;
  // Array (dinamico) di pile
  stack* ruote = new stack[n_ruote];
  for(int i = 0; i < n_ruote; i++) {
    init(ruote[i]);
    popolaCasuale(ruote[i], i);
    cout << "Ruota di " << argv[i + 1] << " ";
    estrai(NUMERI_PER_ESTRAZIONE, ruote[i]);
    cout << endl;
  }
  // Deallocazione dinamica
  delete [] ruote;
  return 0;
}

void popolaCasuale(stack& s, int step) {
  srand(time(NULL) + step);
  // Prepara l'array dei 90 numeri da estrarre
  int numeri_per_ruota[NUMERI_MAX];
  for(int i = 0; i < NUMERI_MAX; i++) {
    numeri_per_ruota[i] = i + 1;
  }
  int numeri_rimasti = NUMERI_MAX;
  for(int j = 0; j < NUMERI_MAX; j++) {
    // Sceglie un numero a caso
    int n = rand() % numeri_rimasti;
    // Mette il numero nella pila
    push(numeri_per_ruota[n], s);
    // "Compatta" l'array di numeri originario
    for(int i = n; i < numeri_rimasti; i++) {
      numeri_per_ruota[i] = numeri_per_ruota[i + 1];
    }
    // Accorcia l'array originario
    numeri_rimasti--;
  }
}

void estrai(int quanti, stack ruota) {
  // Estrae e stampa "quanti" numeri da una ruota
  int numero_estratto;
  for(int i = 0; i < quanti; i++) {
    top(numero_estratto, ruota);
    cout << numero_estratto << " ";
    pop(ruota);
  }
}
