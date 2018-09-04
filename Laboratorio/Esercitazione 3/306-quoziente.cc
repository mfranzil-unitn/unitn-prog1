//
// Acquisire da tastiera due numeri reali
// calcolarne il quoziente facendo prima il
// controllo che la divisione si possa fare
//

#include <iostream> 
using namespace std;

int main()
{
  float a, b;
  
  cout << "Inserisci un reale: ";
  cin >> a;
  cout << "Inserisci un reale: ";
  cin >> b;

  if (b!=0)
    {
      cout << a/b << endl;
    }
  else
    {
      cout << "Divisione impossibile" << endl;
    }

  return (0);
}

