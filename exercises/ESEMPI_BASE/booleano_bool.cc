using namespace std;
#include <iostream>

int main ()        
{

  bool a=true;
  bool b=false;
  int c=-2;  //non un booleano in senso stretto
  
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
