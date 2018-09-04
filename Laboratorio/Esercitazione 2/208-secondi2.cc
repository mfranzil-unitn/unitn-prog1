//
// Dato un intero che rappresenta
// il totalone dei secondi
// stampare a video il corrispondente numero di
// ore, minuti e secondi
//

#include <iostream> 
using namespace std;

int main()
{
  int secondi, minuti, ore, totalone;

  cout << "Inserisci il totale dei secondi: ";
  cin >> totalone;

  ore=totalone/3600;
  minuti=(totalone%3600)/60;
  secondi=(totalone%3600)%60;

  cout << ore <<" : "<< minuti << " : " << secondi << endl;
  
  return (0);
}

