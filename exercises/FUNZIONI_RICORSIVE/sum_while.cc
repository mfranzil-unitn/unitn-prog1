using namespace std;
#include <iostream>


// realizzare ricorsivamente 
// la somma di due numeri avendo a disposizione incrermento 
// e decremento ++x e --x
// versione iterativa

int somma (int n, int m) 
{
  int res;
  while (! m==0) {
    ++n; --m;
  }
  res = n;
  return res;
}

int main() 
{
  int n,m;
  cout << "n? m? (>=0):" ;
  cin >> n >> m ;
  cout << "somma(" << n << "," << m << ") = " << somma(n,m) << endl;
return 0;
}

