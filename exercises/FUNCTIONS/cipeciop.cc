using namespace std;
#include <iostream>

void cip(int x,int & y) 
{
  y=3;
  x=5;
  cout << "  x= " << x << ", y= " << y << endl;
}

void ciop(int & x,int & y)
{
  y=7;
  x = 9;
  cout << "  x= " << x << ", y= " << y << endl;
}

int main () 
{
  int a=2,b=4;
  cout << "a= " << a << ", b= " << b << endl;
  cip(a,b);
  cout << "a= " << a << ", b= " << b << endl;
  ciop(a,b);
  cout << "a= " << a << ", b= " << b << endl;
return 0;
}
