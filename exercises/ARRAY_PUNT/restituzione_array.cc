using namespace std;
#include <iostream>
#include <iomanip>

const int dim=10;

void printarray (int v[], int dim) {
  for (int i=0;i<dim;i++) 
    cout << " " << setw(3) << v[i] << ", ";
  cout << endl;
}

//NB: "a" allocato staticamente 
//all'esterno della funzione!
int *times(int a[], int k) {
  for (int i=0; i<dim; i++)
    a[i]=a[i]*k;
  return a; 
}


int main () 
{
  int v[dim] = {1,2,3,4,5,6,7,8,9,10};
  int * w;
  printarray(v,dim);
  w = times(v,4);
  printarray(w,dim);
  printarray(v,dim);
  return 0;
}

