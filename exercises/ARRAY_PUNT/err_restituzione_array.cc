using namespace std;
#include <iostream>

const int dim=10;

int *times(int a[dim], int k) {
  int b[dim];
  for (int i=0; i<dim; i++)
    b[i]=a[i]*k;
  return b;
}


int main () 
{
  int v[dim] = {1,2,3,4,5,6,7,8,9,10};
  v = times(v,4); // errore: v non puo' essere assegnato
 
  return 0;
}

