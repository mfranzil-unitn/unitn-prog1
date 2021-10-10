using namespace std;
#include <iostream>

void aggiungi_iva(float & val, float  iva) 
{
  val *= 1.0 + iva/100.0;
}


int main () 
{
  float aliquota = 20;
  float val;
  cout << "Valore? ";
  cin >> val;
  aggiungi_iva(val, aliquota);
  cout << "Nuovo valore = " << val << endl;
return 0;
}
