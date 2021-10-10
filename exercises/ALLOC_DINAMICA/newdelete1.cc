using namespace std;
#include <iostream> 


int main () 
{
  int *p = new int(5);
  cout << *p << endl;
  delete p;
   *p = 10; // errore: deallocato 
  cout << *p << endl;
  
  return 0;
}

