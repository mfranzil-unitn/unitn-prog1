using namespace std;
#include <iostream> 
#include <iomanip>

const int dim = 6;

void printarray (int v[]) {
  for (int i=0;i<dim;i++) 
    cout << " " << setw(3) << v[i] << ", ";
  cout << endl;
}

int *times(int a[10], int k) {
  int * b = new int[10];
  for (int i=0; i<10; i++)
    b[i]=a[i]*k;
  return b; 
}

int main () 
{
  int v[dim] = {1,2,3,4,5,6};
  int * v1, *v2, *v3;

  v1 = times (v,1);
  printarray(v1);

  cout << endl;
  v2 = times (v,2);
  printarray(v1);
  printarray(v2);

  cout << endl;
  v3 = times (v,3);
  printarray(v1);
  printarray(v2);
  printarray(v3);
  delete [] v1;
  delete [] v2;
  delete [] v3;
 
  return 0;
}

