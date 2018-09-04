/*
  Data una matrice quadrata ed un vettore, copia gli elementi
  della diagonale principale della matrice nel vettore.
*/

#include <iostream>

using namespace std;

const int SIZE = 3;

void stampaMatrice(const int[SIZE][SIZE]);
void stampaVettore(const int d[SIZE]);
void diagonalePrincipale(const int a[SIZE][SIZE], int d[SIZE]);

int main() {
  int a[SIZE][SIZE] = {{0, 1, 3}, {4, 5, 6}, {8, 10, 12}};
  int v[SIZE];
  stampaMatrice(a);
  diagonalePrincipale(a, v);
  cout << "Diagonale principale: " << endl;
  stampaVettore(v);
  return 0;
}

void stampaMatrice(const int a[SIZE][SIZE]) {
 	for (int i = 0; i < SIZE; i++) {
 	  for (int j = 0; j < SIZE; j++) {
      cout << a[i][j] << "\t";
    }
    cout << endl;
  }
}

void diagonalePrincipale(const int a[SIZE][SIZE], int d[SIZE]) {
 	for (int i = 0; i < SIZE; i++) {
    d[i] = a[i][i];
  }
}

void stampaVettore(const int v[SIZE]) {
 	for (int i = 0; i < SIZE; i++) {
    cout << v[i] << "\t";
  }
  cout << endl;
}
