using namespace std;
#include <iostream> 


int main () 
{
  int x = 7;
  int *p = new int (5);
  int *q = p;
  p = &x;
  delete q;
  cout << *p << endl;
  cout << *q << endl;
  cout << x << endl;
  
  return 0;
}

