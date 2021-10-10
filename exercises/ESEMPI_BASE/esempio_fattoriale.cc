using namespace std;
#include <iostream> // header

// definizione della funzione fattoriale
int fact (int n)
{
  int i,v;
  v=1;
  for (i=1;i<=n;i++)
    v *= i;
  return v;
}

int main () // programma principale
{
  int x;
  cout << "Dammi un numero: ";
  cin >> x;
  cout << "Il fattoriale di " << x << " e': " << fact(x) << endl;
return 0;
}


