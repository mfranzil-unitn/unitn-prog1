using namespace std;
#include <iostream>

int a,b;

void minnie(int & s,int & t, int u)
{
  u += t;
  t += u;
  s -= u;
}

void topolino(int & x,int & y,int z)
{
  x+=(y+z);
  minnie(x,x,x);
}

int main () 
{
  a=5;
  b=4;
  cout << "a= " << a << ", b= " << b << endl;
  topolino(a,b,b);
  cout << "a= " << a << ", b= " << b << endl;
return 0;
}
