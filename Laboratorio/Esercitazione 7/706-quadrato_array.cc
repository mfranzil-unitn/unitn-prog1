/*
  Definire la funzione 'quadratoArray' che,
  dati due array di numeri interi in ingresso,
  mette nel secondo array il quadrato dei numeri
  presenti nel primo.
*/

#include <iostream>

using namespace std;

const int DIM = 5;

// Notare l'uso di const.
// (la dimensione dei due array non e' const: perche'?)
void quadratoArray(const int src[], long dst[], int dim);

int main() {
  int a[] = {0, 1, 2, 3, 40000};
  // Inizializzazione a costante
  long b[DIM] = {0l};

  // Lasciamo il ciclo di stampa nella main
  int i;
  cout << "Array: {";
  for(i = 0; i < DIM - 1; i++) {
    cout << a[i] << ", ";
  }
  cout << a[i] << "}" << endl;
  
  quadratoArray(a, b, DIM);

  cout << "Array: {";
  for(i = 0; i < DIM - 1; i++) {
    cout << b[i] << ", ";
  }
  cout << b[i] << "}" << endl;
}

// E' importante usare nomi significativi per i parametri,
// e non affidarsi solo all'ordine di inserimento
void quadratoArray(const int src[], long dst[], int dim) {
  // Non occorre ritornare nulla
  for(int i = 0; i < dim; i++) {
    dst[i] = src[i] * src[i];
  }
}
