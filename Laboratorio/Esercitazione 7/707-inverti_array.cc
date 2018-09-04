/*
  Dichiarare e definire le funzioni
  - leggiArray
  - stampaArray
  - invertiArray
  che accettano tutte in ingresso esattamente due parametri:
  - un array di interi e
  - la dimensione del medesimo array.
  Si noti che la dimensione deve essere inferiore o uguale
  alla costante globale DIM; la dimensione effettiva dell'array
  viene letta da tastiera nella funzione 'leggiArray'.
  Attenzione al tipo di parametro in questo caso!

  (E' possibile utilizzare la funzione 'scambia' nell'implementazione)
*/


#include <iostream>

using namespace std;

const int SIZE = 100;

void stampaArray(const int a[], int dim);
void invertiArray(int a[], int dim);
void leggiArray(int a[], int& dim);
void scambia(int& a, int& b);

int main() {
  int a[SIZE];
  // "n" non e' inizializzato perche' viene
  // comunque sovrascritto da "leggiArray"
  int n;
  leggiArray(a, n);
  invertiArray(a, n);
  stampaArray(a, n);
  return 0;
}

void leggiArray(int a[], int& dim) {
  do {
    cout << "Dimensione array: ";
    cin >> dim;
    if(dim > SIZE) {
      cout << "La dimensione deve essere inferiore a: " << SIZE << endl;
    }
  } while (dim > SIZE);
  for(int i = 0; i < dim; i++) {
    cout << i << ": ";
    cin >> a[i];
  }
}

void stampaArray(const int a[], int dim) {
  for(int i = 0; i < dim; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void invertiArray(int a[], int dim) {
  for(int i = 0; i < dim / 2; i++) {
    scambia(a[i], a[dim - i - 1]);
  }
}

void scambia(int& a, int& b) {
  int c = a;
  a = b;
  b = c;
}
