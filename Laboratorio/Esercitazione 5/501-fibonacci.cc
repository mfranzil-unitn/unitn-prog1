//
// Dato un intero n acquisito tastiera.
// Stampare i primi n elementi della
// serie di Fibonacci (1 1 2 3 5 8 13 ...)
//

#include <iostream> 
using namespace std;

int main()
{
  int n,precedente,precedente2,fib;

  cout << "Quanti elementi vuoi stampare? ";
  cin >> n;
  precedente=0;
  precedente2=1;
  
  for (int i=0; i<n; i++)
    {
      fib=precedente+precedente2;
      cout << fib << " ";
      precedente2=precedente;
      precedente=fib;
    }

  cout << endl;

  return (0);
}

