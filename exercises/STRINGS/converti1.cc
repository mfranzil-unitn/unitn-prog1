using namespace std;
#include <iostream>
#include <cstdlib>
#include <iomanip>

int main () 
{
  const float euro = 1936.27;

  int value;
  float liravalue;
  
  cin >> value;
  while (!cin.fail()) {
    liravalue = euro*value;
    cout << value << " " << fixed << setw(8) << setprecision(0) 
         << liravalue << endl;
    cin >> value;
  }
  return 0;
}
