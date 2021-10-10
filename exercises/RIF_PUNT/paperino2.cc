using namespace std;
#include <iostream>

int a,b;

void ziopaperone(int  *pt,int  *ps)
{
  *pt += *ps;
  *ps -= *pt;
}

void paperino(int  *px,int  *py)
{
  *px+=*py;
  ziopaperone(px,px);
  *py+=*px;
  ziopaperone(py,py);
}

int main () 
{
  a=5;
  b=4;
  cout << "a= " << a << ", b= " << b << endl;
  paperino(&a,&b);
  cout << "a= " << a << ", b= " << b << endl;
return 0;
}
