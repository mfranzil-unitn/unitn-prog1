//
// Prende in input due interi
// e scambia il contenuto delle due variabili
// in cui sono memorizzati i due interi
//

#include <iostream> 
using namespace std;

int main()
{
  int a,b,appoggio;

  cout <<"Inserisci un intero: ";
  cin >> a;
  cout <<"Inserisci un intero: ";
  cin >> b;

  appoggio=a;
  a=b;
  b=appoggio;
  
  cout << "Il contenuto di a è " << a << endl;
  cout << "Il contenuto di b è " << b << endl;

  return 0;
}

