
using namespace std;
#include <iostream>

int main()
{
  int i=0,j=1;
  int *p,*q;
  p = &i;
  q = &j;
  // double x=1.0;
  // p = &x; // ERRORE: tipo incompatibile!!!
  *p = *q;  
  i++;
  j--;
  
  q = p;  
  (*p)++;
  (*q)++;
  i++;
  j--;
  
  cout << "i = " << i << endl;
  cout << "j = " << j << endl;
  cout << "*p = " << *p << endl;
  cout << "*q = " << *q << endl;
  cout << "&i = " << long(&i) << endl;
  cout << " p = " << long(p) << endl;
  cout << " q = " << long(q) << endl;
  return 0;
  
}
