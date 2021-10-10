using namespace std;
#include <iostream>
#include <iomanip>

const int MAXDIM = 100;

void swap (int & a, int & b) 
{
  int c = a;
  a = b;
  b = c;
}

void printarray(int v[],int n) 
{
  int i;
  cout << "[";
  for (i=0;i<n;i++) {
    cout << setw(2) << v[i] << " ";
  }
  cout << "]\n";
}


void bubblesort (int v[],int n) 
{
  int i,k;
  for (k=n-1;k>0;k--) {
    for (i=0;i<k;i++) {
      if (v[i] > v[i+1]) {
        swap(v[i],v[i+1]);
      }
cout << "k= " << setw(2) << k << " i= " << setw(2) << i << " ";
printarray(v,n);
    }
cout << endl;
  }
}


int main () 
{
  //int myarray[MAXDIM] = {41,3,9,1,5,17,6,20,37,2,8,23,10,0,11,19};
  int myarray[MAXDIM] = {11,12,13,14,15,16,1,2,3,4,5,6,7,8,9,10};
  int dim = 16;
  
  printarray(myarray,dim);
  cout << endl;
  bubblesort(myarray,dim);
  printarray(myarray,dim);
}

  
  
