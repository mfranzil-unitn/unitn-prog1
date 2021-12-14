#include <iostream> 
using namespace std;

int main()
{
  int x,y,z;
  cout << "Dammi due numeri interi:\n";
  cin >> x >> y;
  // a = a+b
  // b = a-b
  // a = a-b
  z = x;
  x = y;
  y = z;
  cout << "I tuoi numeri sono: " << x << " e " << y << "\n";

  return (0);
}

