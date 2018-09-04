/*
  Definire la funzione "media" che prende in ingresso
  una matrice di interi e ne ritorna la media come
  numero double.
  Se necessario, definire piu' funzioni per svolgere il compito.
*/

#include <iostream>

using namespace std;

const int SIZE = 3;

void stampaMatrice(const int[SIZE][SIZE]);
double media(const int a[SIZE][SIZE]);
long sum(const int a[SIZE][SIZE]);

int main() {
  int a[SIZE][SIZE] = {{0, 1, 3}, {4, 5, 6}, {8, 10, 12}};
  stampaMatrice(a);
  cout << "Media: " << media(a) << endl;
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

double media(const int a[SIZE][SIZE]) {
  return (double)sum(a) / (double)(SIZE * SIZE);
}

long sum(const int a[SIZE][SIZE]) {
  long result = 0l;
 	for (int i = 0; i < SIZE; i++) {
 	  for (int j = 0; j < SIZE; j++) {
      result += a[i][j];
    }
  }
  return result;
}
