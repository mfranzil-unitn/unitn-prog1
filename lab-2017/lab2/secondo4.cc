#include <iostream> 
using namespace std;

int main()
{
  double a;
  cout << "Inserisci il prezzo senza l'IVA: ";
  cin >> a;
  a*=1.22;
  cout << "Dovrai sborsare " << a << "€ comprensivo di IVA per questo prodotto..\n";
}

