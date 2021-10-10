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
  while (!cin.eof()) {
    if (!cin.fail()) {
      liravalue = euro*value;
      cout << value << " " << fixed << setw(8) << setprecision(0) 
           << liravalue << endl;
    }
    else { // (cin.fail() ma non cin.eof(
      char s [100];
      cin.clear(); // ripristina lo stato normale
      cin >> s;
    }
    cin >> value;
  }
  return 0;
}
