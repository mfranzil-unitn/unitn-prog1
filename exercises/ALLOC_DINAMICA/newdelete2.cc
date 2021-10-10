using namespace std;
#include <iostream> 


int main () 
{
  int x = 7;
  int *p = &x;
  delete p; // errore: cerca di deallocare x
  cout << *p << endl;
  cout << x << endl;
  
  return 0;
}

