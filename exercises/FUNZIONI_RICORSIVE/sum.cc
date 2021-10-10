using namespace std;
#include <iostream>


// realizzare ricorsivamente 
// la somma di due numeri avendo a disposizione incrermento 
// e decremento ++x e --x

int somma (int n, int m) 
{
  int res;
  if (m==0) 
    res = n;
  else {
    ++n; --m;
    res = somma(n,m);
  }
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

