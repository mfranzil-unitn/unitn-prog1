using namespace std;
#include <iostream>

int main () 
{
  int sum = 0;
  int x;
 
  cin >> x;
  while (!cin.fail()) {
    sum = sum + x;
    cin >> x;
  }
  cout << "Somma = " << sum << endl;

return 0;
}
