using namespace std;
#include <iostream>
#include <cstring>

const int Nmax = 1000;

struct myarray {
  double v[Nmax];
  int nelem;
};

double somma (myarray a,int n) {
  double res;  
  if (n==0) 
    res = a.v[0];
  else
    res = a.v[n]+somma(a,n-1);
  return res;
}

int main () {
  myarray a;
  // inizializza Myarray
  a.nelem=Nmax;
  for (int i=0;i<a.nelem;i++) {
    a.v[i]=double(i+1.0);
  }
  
  cout << "La somma degli elementi dell'array e' " << somma(a,a.nelem-1) << endl;
}

