//
// Presi in input i valori interi della base
// maggiore, della base minore e
// dell'altezza di un trapezio
// stampare a video l'area del trapezio
//

#include <iostream> 
using namespace std;

int main()
{
  int base_maggiore,base_minore,altezza;
  float area;

  cout <<"Inserisci il valore della base maggiore: ";
  cin >> base_maggiore;
  cout <<"Inserisci il valore della base minore: ";
  cin >> base_minore;
  cout <<"Inserisci il valore dell'altezza: ";
  cin >> altezza;

  area=(base_maggiore+base_minore)*altezza/2.0;
  
  cout << "Il valore dell'area e' " << area << endl;

  return (0);
}

