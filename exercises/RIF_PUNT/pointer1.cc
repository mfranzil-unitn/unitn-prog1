
using namespace std;
#include <iostream>

int main()
{
  int i=1,j=0;
  int *p,*q;
  p = &i;
  *p = 3;
  j = *p;
  q = p;
  (*p)++;
  (*q)++;
  
  cout << "i = " << i << endl;
  cout << "j = " << j << endl;
  cout << "*p = " << *p << endl;
  cout << "*q = " << *q << endl;

return 0;
}
