using namespace std;
#include <iostream>

int a,b;

void scambia (int * px, int * py) 
{
  int t;
  t = *px;
  *px = *py;
  *py = t;
}

int main () 
{
  
  cout << "a e b?: ";
  cin >> a >> b;
  cout << "a= " << a << ", b= " << b << endl;
  scambia(&a,&b);
  cout << "a= " << a << ", b= " << b << endl;
return 0;
}

