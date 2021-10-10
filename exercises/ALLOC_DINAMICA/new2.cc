using namespace std;
#include <iostream> 


int main () 
{
  int *p = new int;
  cout << "p= " << (long) p << ", *p = " << *p << endl;
  *p = 5;
  cout << "p= " << (long) p << ", *p = " << *p << endl;
  return 0;
}

