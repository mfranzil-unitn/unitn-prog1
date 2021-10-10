using namespace std;
#include <iostream>

int main () 
{
  int n,i,somma;
  cout << "Quanti interi vuoi sommare?: ";
  cin >> n;

  i = 1;
  somma = 0;

  while (i<=n) {
    somma += i;
    i++;
  }
  cout  << "Somma = "  << somma   << endl;
return 0;
}
