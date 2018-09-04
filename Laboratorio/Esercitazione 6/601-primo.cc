//
// Dato da tastiera un numero intero maggiore 
// o uguale a 2, verificare se questo numero
// e' primo o meno attraverso una
// funzione con questa dichiarazione
// bool verifica_primo(int);
//

#include <iostream> 
using namespace std;

bool verifica_primo(int);

int main()
{
  int n;
  
  cout << "Inserisci un intero maggiore o uguale a 2: ";
  cin >> n;

  if (verifica_primo(n)==true)
    {
      cout << "Il numero inserito e' primo" << endl;
    }
  else
    {
      cout << "Il numero inserito NON e' primo" << endl;
    }

  return (0);
}

bool verifica_primo(int n)
{
  bool check_primo=true;
  
  for (int i=2; ((i<=n/2)&&(check_primo==true)); i++)
    {
      if (n%i==0)
	{
	  check_primo = false;
	}
    }
  return(check_primo);
}
