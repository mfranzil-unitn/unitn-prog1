/*
  Definire la funzione "media" che prende in ingresso
  una matrice di interi e ne ritorna la media come
  numero double: la funzione va implementata in modo ricorsivo.
  Se necessario, definire piu' funzioni per svolgere il compito,
  purche' siano tutte ricorsive.
*/

#include <iostream>

using namespace std;

const int SIZE = 3;

void stampaMatrice(const int[SIZE][SIZE]);
double media(const int a[SIZE][SIZE]);
long sum(const int a[SIZE][SIZE]);
long sumRic(const int a[SIZE][SIZE], int pos, int dim);
long sumRigaRic(const int a[SIZE][SIZE], int riga, int colonna, int dim);
long sumColonnaRic(const int a[SIZE][SIZE], int riga, int colonna, int dim);

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
  return sumRic(a, 0, SIZE);
}

long sumRic(const int a[SIZE][SIZE], int pos, int dim) {
  /* 
     In alternativa:
     
     return (a < pos) ? 
       (a[pos][pos] + sumRigaRic(a, pos, pos + 1, dim) + sumColonnaRic(a, pos + 1, pos, dim) +
       sumRic(a, pos + 1, dim)) :
       0l;
  */
  long result = 0l;
  if(pos < dim) {
     result = a[pos][pos] + sumRigaRic(a, pos, pos + 1, dim) + sumColonnaRic(a, pos + 1, pos, dim) +
       sumRic(a, pos + 1, dim);
  }
  return result;
}

long sumRigaRic(const int a[SIZE][SIZE], int riga, int colonna, int dim) {
  long result = 0l;
  if(colonna < dim) {
    result = a[riga][colonna] + sumRigaRic(a, riga, colonna + 1, dim);
  }
  return result;
}

long sumColonnaRic(const int a[SIZE][SIZE], int riga, int colonna, int dim) {
  long result = 0l;
  if(riga < dim) {
    result = a[riga][colonna] + sumColonnaRic(a, riga + 1, colonna, dim);
  }
  return result;
}
