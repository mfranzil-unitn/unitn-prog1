using namespace std;
#include <iostream>

//variabili globali (per debugging)
int n1,n2;

int mcd(int &  a,int & b) 
{
  int resto;
  while(b!=0) {
    resto = a%b;
    a = b;
    b = resto;
  }
  return a;
}

int main () 
{
  cout << "Inserisci una coppia di numeri: ";
  cin >> n1 >> n2;
  int res = mcd(n1,n2);
  cout << "Il M.C.D. tra " << n1 << 
    " e " << n2 <<
    " vale " << res << endl;
return 0;
}
