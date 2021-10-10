using namespace std;
#include <iostream>


int main ()        
{
  const int kilo = 1024; 
  const double pi = 3.14159; 
  const int mille = kilo - 24;
  const char c = 'C';


  cout << "kilo = " << kilo << endl;
  cout << "pi = " << pi << endl;
  cout << "mille = " << mille << endl;
  cout << "c = " << c << endl;

  kilo = 100; //==> ERRORE

  // MOLTO PERICOLOSO (EVITARE!!):
  // SU ALCUNE MACCHINE a e duea potrebbero essere inizializzzate a 0
  int a;
  const int duea = 2*a;
  cout << "a = " << a << endl;
  cout << "duea = " << duea << endl;
  
return 0;
}
 

