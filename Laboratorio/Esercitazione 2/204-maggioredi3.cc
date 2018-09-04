//
// Dati 3 interi a, b, c da tastiera
// stampare a video
// 1 se a e' il massimo, 0 altrimenti
// SENZA USARE CONDIZIONI
//

#include <iostream> 
using namespace std;

int main()
{
  int a,b,c;
  bool risposta;

  cout << "Inserisci un intero: ";
  cin >> a;
  cout << "Inserisci un intero: ";
  cin >> b;
  cout << "Inserisci un intero: ";
  cin >> c;
  
  risposta=((a>c)&&(a>b));

  cout << risposta << endl;
  
  return (0);
}

