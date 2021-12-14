#include <iostream>

using namespace std;

const int SIZE = 1000;

void stampaArray(const int a[], int dim);
void leggiArray(int a[], int& dim);
void mescolaArray(int [], int [], int[], int);

int main() {
  int a[SIZE], b[SIZE], c[2*SIZE];
  int n;
  do {
    cout << "Dimensione array: ";
    cin >> n;
    if(n > SIZE) {
      cout << "La dimensione deve essere inferiore a: " << SIZE << endl;
    }
  } while (n > SIZE);
  leggiArray(a, n);
  leggiArray(b, n);
  mescolaArray(a, b, c, n);
  stampaArray(c, n);
  return 0;
}

void leggiArray(int a[], int& dim) {
 for(int i = 0; i < dim; i++) {
    cout << "Element[" << i << "]: ";
    cin >> a[i];
  }
}

void stampaArray(const int a[], int dim) {
  cout << "[";
  for(int i = 0; i < (dim*2); i++) {
    cout << a[i] << ", ";
  }
  cout << "end] " << endl;
}

void mescolaArray(int a[], int b[], int c[], int dim)
{
  for (int i = 0; i<(2*dim); i++)
  {
     if(i%2==0)
     {
       c[i] = a[i/2];
     }
     else
     {
       c[i] = b[i/2];
     }
  }
}
