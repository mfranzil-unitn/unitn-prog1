/*
  Implementare la funzione 'stampaArrayRic' che stampa
  il contenuto di un array al contrario.
*/

#include <iostream>

using namespace std;

const int SIZE = 100;

void stampaArrayRic(int a[], int dim);
void leggiArray(int a[], int& dim);

int main() {
  int a[SIZE];
  int n;
  leggiArray(a, n);
  stampaArrayRic(a, n);
  cout << endl;
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

void stampaArrayRic(int a[], int dim) {
  if(dim > 0) {
    cout << " " << a[dim - 1];
    stampaArrayRic(a, dim - 1);
  }
}
