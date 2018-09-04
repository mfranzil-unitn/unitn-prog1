/*
  Dichiarare e definire la funzione 'invertiArrayRic'
  che accetta in ingresso un array di interi,
  la dimensione del medesimo array e un'indice.
  La funzione inverte la posizione degli elementi 
  al suo interno in modo speculare e deve essere 
  implementata in modo ricorsivo.

  (E' possibile utilizzare la funzione 'scambia' nell'implementazione)
*/

#include <iostream>

using namespace std;

const int SIZE = 100;

void stampaArray(int a[], int dim);
void invertiArray(int a[], int dim);
void invertiArrayRic(int a[], int dim, int indice);
void leggiArray(int a[], int& dim);
void scambia(int& a, int& b);

int main() {
  int a[SIZE];
  int n;
  leggiArray(a, n);
  invertiArray(a, n);
  stampaArray(a, n);
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

void stampaArray(int a[], int dim) {
  for(int i = 0; i < dim; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void invertiArray(int a[], int dim) {
  invertiArrayRic(a, dim, 0);
}

void invertiArrayRic(int a[], int dim, int indice) {
  if(dim >= 2) {
    scambia(a[indice], a[indice + dim - 1]);
    invertiArrayRic(a, indice + 1, dim - 2);
  }
}

void scambia(int& a, int& b) {
  int c = a;
  a = b;
  b = c;
}
