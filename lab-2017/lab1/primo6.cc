#include <iostream> 
using namespace std;

int main()
{
  int x,y,z;
  float a;
  cout << "Scrivi il valore dell'altezza: ";
  cin >> x;
  cout << "Scrivi il valore di una base: ";
  cin >> y;
  cout << "Scrivi il valore dell'altra base: ";
  cin >> z;
  a = (y+z)*x/2.0;
  cout << "L'area del triangolo è pari a: " << a << "\n";

  return (0);
}

