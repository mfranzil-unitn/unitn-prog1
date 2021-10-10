using namespace std;
#include <iostream>

int main () 
{
  int n,i,somma;
  cout << "Quanti interi vuoi sommare?: ";
  cin >> n;

  i = 1;
  somma = 0;

  if (n>=1)    // condizione per evitere N=0
    do {
      somma += i;
      i++;
    } while (i<=n);

  cout  << "Somma = "  << somma   << endl;
return 0;
}
