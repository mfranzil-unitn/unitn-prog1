using namespace std;
#include <iostream>

int main ()        
{

  int a=1;
  int b=0;
  int c=-1;  //non un booleano in senso stretto
  
  cout << " a = " << a << " b = " << b << " c = " << c << endl;

  a = b||c;
  cout << " a = " << a << " b = " << b << " c = " << c << endl;

  a = b&&c;
  cout << " a = " << a << " b = " << b << " c = " << c << endl;

  a = !(b||c);
  cout << " a = " << a << " b = " << b << " c = " << c << endl;
  
  a = (!b&&!c);
  cout << " a = " << a << " b = " << b << " c = " << c << endl;
  
  a = !b||c;
  cout << " a = " << a << " b = " << b << " c = " << c << endl;

return 0;
}
