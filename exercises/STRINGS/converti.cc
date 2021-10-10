using namespace std;
#include <iostream>
#include <cstdlib>
#include <iomanip>

int main () 
{
  const float euro = 1936.27;

  int value;
  float liravalue;
  
  // Questo programma richiede un separatore dopo l'ultimo elemento letto
  // altrimenti meglio usare !cin.fail()
  // NOTA: "!cin.eof()" va usato sempre *DOPO* almeno un'operazione di lettura
  cin >> value;
  while (!cin.eof()) {
    liravalue = euro*value;
    cout << value << " "  << fixed << setw(8) << setprecision(0) 
         << liravalue << endl;
    cin >> value;
  }
  return 0;
}
