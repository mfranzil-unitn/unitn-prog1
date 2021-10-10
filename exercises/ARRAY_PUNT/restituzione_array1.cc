using namespace std;
#include <iostream>
#include <iomanip>

const int dim=10;

int a[dim] = {1,2,3,4,5,6,7,8,9,dim};

void printarray (int v[], int dim) {
  for (int i=0;i<dim;i++) 
    cout << " " << setw(3) << v[i] << ", ";
  cout << endl;
}

//NB: "a" allocato staticamente 
//all'esterno della funzione!
int *times(int k) {
  for (int i=0; i<dim; i++)
    a[i]=a[i]*k;
  return a; 
}


int main () 
{
  int * w;
  printarray(a,dim);
  w = times(4);
  printarray(w,dim);
  printarray(a,dim);
  return 0;
}

