using namespace std;
#include <iostream>

int main ()        
{

  int x=0;
  int y=2;
  int z=3;
  
  cout << " x = " << x << " y = " << y << " z = " << z << endl;  
  x += z;
  cout << " x = " << x << " y = " << y << " z = " << z << endl;
  x -= y;
  cout << " x = " << x << " y = " << y << " z = " << z << endl;
  x *= z;
  cout << " x = " << x << " y = " << y << " z = " << z << endl;
  x /= z;
  cout << " x = " << x << " y = " << y << " z = " << z << endl;
  x %= z;  
  cout << " x = " << x << " y = " << y << " z = " << z << endl;


return 0;
}
