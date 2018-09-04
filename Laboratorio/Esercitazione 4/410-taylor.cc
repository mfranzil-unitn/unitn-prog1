//
// Calcolare il ln(1+x) con Taylor
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float x,somma;

  cout << "Inserisci x: ";
  cin >> x;

  if ((x>1)||(x<-1))
    {
      cout << "ERRORE: valore di x non valido" << endl;
    }
  else
    {
      for (int n=1; n<10000; n++)
	{
	  somma+=pow(-1,n+1)*pow(x,n)/n;
	}

      cout << "ln(1+ " << x << ")= " << somma << endl;
    }
    
  return (0);
}

