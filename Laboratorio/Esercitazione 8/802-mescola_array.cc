/*
  Dichiarare e definire la funzione 'mescolaArray'
  che prende in ingresso tre array di interi "a", "b" e "c",
  e la dimensione (uguale) dei primi due.
  La funzione copia il contenuto degli array "a" e "b"
  nell' array "c", alternando gli elementi secondo lo schema:
    c[2 * n] = {a1, b1, a2, b2, a3, b3, ..., an, bn}
*/

#include <iostream>

using namespace std;

const int SIZE = 100;

void stampaArray(const int a[], int dim);
void mescolaArray(int a[], int b[], int c[], int dim);
void leggiArray(int a[], int& dim);

int main() {
  int a[SIZE];
  int b[SIZE];
  // Qui viene potenzialmente sprecato molto spazio
  int c[2*SIZE];
  int n;
  leggiArray(a, n);
  // Insicuro! Sovrascrivo il valore di n, e b puo' venire troncato
  // (se il nuovo valore e' inferiore) o esteso indebitamente
  // (nel caso contrario)
  leggiArray(b, n);
  mescolaArray(a, b, c, n);
  stampaArray(c, n * 2);
  return 0;
}

void leggiArray(int a[], int& dim) {
  cout << "Dimensione: ";
  cin >> dim;
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

/*
  Versione alternativa, con tre indici indipendenti
  per i tre array

void mescolaArray(int a[], int b[], int c[], int dim) {
  for(int i = 0, j = 0, k = 0; i < 2 * dim; i++) {
    if(i % 2 == 0) {
      c[i] = a[j];
      j++;
    } else {
      c[i] = b[k];
      k++;
    }
  }
}
*/

void mescolaArray(int a[], int b[], int c[], int dim) {
  for(int i = 0; i < 2 * dim; i++) {
    if(i % 2 == 0) {
      c[i] = a[i / 2];
    } else {
      c[i] = b[(i - 1) / 2];
    }
  }
}
