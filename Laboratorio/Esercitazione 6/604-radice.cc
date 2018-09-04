//
// Acquisito da tastiera un double  
// scrivere il codice delle funzione
// radice_quadrata con questa dichiarazione
// double radice_quadrata(double input,bool* neg);
// dove neg vale true se input e' negativa
// se input e' negativa la fun deve restituire 0
//

#include <iostream> 
#include <cmath>
using namespace std;
double radice_quadrata(double input,bool* neg);

int main()
{
  double input,risultato;
  bool neg;
  
  cout << "Inserisci un double: ";
  cin >> input;

  risultato=radice_quadrata(input,&neg);
  
  if (neg==true)
    {
      cout << "Non posso fare la radice di numeri negativi" << endl;
    }
  else
    {
      cout << "La radice e': " << risultato <<endl;
    }
  return (0);
}

double radice_quadrata(double input,bool* neg)
{
  double radice;
  
  if (input<0)
    {
      *neg=true;
      radice=0;
    }
  else
    {
      *neg=false;
      radice=sqrt(input);
    }
  return(radice);
}
