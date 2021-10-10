using namespace std;
#include <iostream>

int a,b;

void ziopaperone(int & t,int & s)
{
  t += s;
  s -= t;
}

void paperino(int & x,int & y)
{
  x+=y;
  ziopaperone(x,x);
  y+=x;
  ziopaperone(y,y);
}

int main () 
{
  a=5;
  b=4;
  cout << "a= " << a << ", b= " << b << endl;
  paperino(a,b);
  cout << "a= " << a << ", b= " << b << endl;
return 0;
}
