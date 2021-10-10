using namespace std;
#include <iostream> // header
#include "fact.h"     // user-defined hearer


int main () // programma principale
{
  int x;
  cout << "Dammi un numero: "; 
  cin >> x;                       
  cout << "Il fattoriale di " << x << " e': " << fact(x) << endl;
return 0;
}


