using namespace std;
#include <iostream>

int a,b;

void pippo(int & t,int & s)
{
  t = s;
  s += 2;
}

void pluto(int & x,int & y)
{
  pippo(y,x);
}

int main () 
{
  a=5;
  b=4;
  cout << "a= " << a << ", b= " << b << endl;
  pluto(a,b);
  cout << "a= " << a << ", b= " << b << endl;
return 0;
}
