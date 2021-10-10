using namespace std;
#include <iostream>

// stampa i numeri da m a n
void stampa (int m, int n) { // m,m+1,...,n-1,n
  if (m>n)  
    cout << endl;
  else { 
    cout << m << " ";
    m++;
    stampa(m,n);
  }
} 


int main() 
{
  int n,m;
  cout << "m? n? (m,n>=0): ";
  cin >> m >> n;
  cout << "stampanumeri(" << m << ","  << n << ") = \n";
  stampa(m,n);
return 0;
}

