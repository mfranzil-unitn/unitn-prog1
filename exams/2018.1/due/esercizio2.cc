#include <iostream>
using namespace std;

// Inserire qui le DICHIARAZIONI delle funzioni
long long int prodotto_somma_incrociata(int* primo, int* secondo, int dim);
void prodotto_somma_incrociata_ric(int * primo, int* secondo, int start, int dim, long long int& sum);

int main() {
  int primo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int secondo[10] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
  
  cout << "Il prodotto delle somme incrociate dei due array e' " <<
    prodotto_somma_incrociata(primo, secondo, 10) << endl;

  return 0;
}

// Inserire qui le DEFINIZIONI delle funzioni

long long int prodotto_somma_incrociata(int* primo, int* secondo, int dim)
{
  long long int sum = 1;
  prodotto_somma_incrociata_ric(primo, secondo, 0, dim, sum); 
  return sum;
}

void prodotto_somma_incrociata_ric(int * primo, int* secondo, int start, int dim, long long int& sum)
{
  if(dim > 0)
  {
    sum *= (primo[start] + secondo[dim-1]);
    prodotto_somma_incrociata_ric(primo, secondo, start+1, dim-1, sum);
  }
}