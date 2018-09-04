//
// Acquisire da tastiera un carattere MINUSCOLO
// e stampare a video se questo carattere
// e' una vocale o una consonante
//

#include <iostream> 
using namespace std;

int main()
{
  char carattere;
  
  cout << "Inserisci un carattere: ";
  cin >> carattere;

  if ((carattere=='a')||(carattere=='e')||(carattere=='i')||(carattere=='o')||(carattere=='u'))
    {
      cout << "Il carattere inserito è una vocale" << endl;
    }
  else
    {
      if ((carattere>='a')&&(carattere<='z'))
	{
           cout << "Il carattere inserito è una consonante" << endl;
	}
      else
	{
           cout << "Il carattere inserito non è una lettera" << endl;
	}
    }
  
  return (0);
}

