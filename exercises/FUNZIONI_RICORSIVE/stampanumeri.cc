using namespace std;
#include <iostream>

void stampa1 (int m, int n) { // m,m+1,...,n-1,n
  if (m>n)  
    cout << endl;
  else { 
    cout << m << " ";
    stampa1(m+1,n);
  }
} 

void stampa (int n) {
  stampa1 (0,n);
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

