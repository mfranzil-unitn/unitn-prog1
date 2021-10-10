using namespace std;
#include <iostream>

void stampa1 (int m, int n) { // m,m+1,...,n-1,n
  if (m<=n) { 
    stampa1(m,(n+m)/2-1);
    cout << (n+m)/2 << " ";
    stampa1((n+m)/2+1,n);
  }
} 

void stampa (int n) {
  stampa1 (0,n);
  cout << endl;
}

int main() 
{
  int n;
  cout << "n? ";
  cin >> n;
  cout << "stampanumeri(" << n << ") = \n";
  stampa(n);
return 0;
}

