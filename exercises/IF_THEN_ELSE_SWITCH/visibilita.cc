using namespace std;
#include <iostream>

int n = 33; // variabile globale

int main () 
{
  cout << "Blocco esterno, prima della definizione: n = " << n << endl;
  int n = 44;
  cout << "Blocco esterno: n = " << n << endl;
  {
    int n ;
    cout << "Inserire un intero: ";
    cin >> n;
    cout << "1 Blocco: n = " << n << endl;
  } 
  cout << "Blocco esterno: n = " << n << endl;
  {
    cout << "2 Blocco: n = " << n << endl;
    n++;
  }
  {
    int n = 2;
    cout << "3 Blocco: n = " << n << endl;
  } 
  cout << "Blocco esterno: n = " << n << endl;  
return 0;
}
