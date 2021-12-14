#include <iostream> 
using namespace std;

int main()
{
  int x,y,z;
  float z;
  cout << "Scrivi il valore dell'altezza:";
  cin >> x;
  cout << "Scrivi il valore di una base:";
  cin >> y;
  cout << "Scrivi il valore dell'altra base:";
  cin >> z; 
  cout << "L'area del triangolo è pari a: " << (y+z)*x/2.0  << "\n";

  return (0);
}

