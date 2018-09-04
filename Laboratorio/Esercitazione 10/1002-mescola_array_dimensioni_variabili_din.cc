/*
  Reimplementare l'esempio "mescola_array" tenendo conto
  di array di dimensione potenzialmente diversa; va percio'
  reimplementata la "mescolaArray" in questo senso.

  Inoltre, impiegare l'allocazione dinamica nella "main"
  per i tre array "a", "b" e "c": va modificata la
  funzione "leggiArray".
*/

#include <iostream>

using namespace std;

void stampaArray(int a[], int dim);
void mescolaArray(int a[], int b[], int c[], int dim_a, int dim_b);
int* leggiArray(int& dim);

int main() {
  int *a, *b, *c;
  int n, m;
  // Le operazioni di allocazione: e "popolamento"
  // di a vengono svolte entrambe dalla funzione
  // "leggiArray"
  a = leggiArray(n);
  b = leggiArray(m);
  // Invece l'array "c" viene allocato nella main
  // e valorizzato nella funzione "mescolaArray":
  // in questo modo, l'implementazione della "mescolaArray"
  // rimane identica al caso di array statici
  c = new int[n + m];
  mescolaArray(a, b, c, n, m);
  // Ora "a" e "b" non servono piu'
  delete [] a;
  delete [] b;
  stampaArray(c, n + m);
  // Adesso anche "c" non serve piu'
  delete [] c;
  return 0;
}

int min(int a, int b) {
  return a < b ? a : b;
}

int* leggiArray(int& dim) {
  cout << "Dimensione: ";
  cin >> dim;
  int* ris = new int[dim];
  for(int i = 0; i < dim; i++) {
    cout << i << ": ";
    cin >> ris[i];
  }
  return ris;
}

void stampaArray(int a[], int dim) {
  for(int i = 0; i < dim; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void mescolaArray(int a[], int b[], int c[], int dim_a, int dim_b) {
  // Notare la dichiarazione fuori dal ciclo for
  int i;
  // Si puo' rendere piu' efficiente calcolando
  // una volta sola "min(dim_a, dim_b)"
  for(i = 0; i < min(dim_a, dim_b) * 2; i++) {
    if(i % 2 == 0) {
      c[i] = a[i / 2];
    } else {
      c[i] = b[(i - 1) / 2];
    }
  }
  // Completo, con gli elementi rimasti
  for(; i < dim_a + dim_b; i++) {
    if(dim_a > dim_b) {
      c[i] = a[i - min(dim_a, dim_b)];
    } else {
      c[i] = b[i - min(dim_a, dim_b)];
    }
  }
}
