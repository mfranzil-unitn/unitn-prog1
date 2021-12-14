#include <iostream> 
using namespace std;

int main()
{
  int a,b;
  bool z;
  cout << "Scrivi il primo valore dell'intero: ";
  cin >> a;
  cout << "Scrivi il secondo valore dell'intero: ";
  cin >> b;
  z = !(a>b);
  cout << z << "\n";
  
  return (0);
}

