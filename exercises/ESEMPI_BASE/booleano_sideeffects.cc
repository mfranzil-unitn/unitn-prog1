using namespace std;
#include <iostream>

int main ()        
{

  int x=0;
  int z=3;

  cout << " x = " << x  << " z = " << z << endl;
  cout << "(x++>0)&&(z++>0) = " << ((x++>0)&&(z++>0)) << endl; 
  cout << " x = " << x << " z = " << z << endl<< endl;

  x=1;
  z=3;
  
  cout << " x = " << x  << " z = " << z << endl;
  cout << "(x++>0)&&(z++>0) = " << ((x++>0)&&(z++>0)) << endl; 
  cout << " x = " << x << " z = " << z << endl;

return 0;
}
