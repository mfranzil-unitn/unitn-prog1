using namespace std;
#include <iostream>

int main ()        
{

  // provare anche con double
  float x=1.234567e8, y=x+1.0; 
  //double x=1.234567e8, y=x+1.0; 

  cout << "size = " << sizeof(x)*8 << " bits" << endl; 

    cout << "x= " << x << ", y= " << y << ", y-x=" << y-x << endl;
  cout << "`y-x == 1.0' = " << ( y-x == 1.0) << endl;

  y = 11.1;
  x = y-1.1;
    cout << "x= " << x << ", y= " << y << ", y-x=" << y-x << endl;
  cout << "`y-x == 1.1' = " << ( y-x == 1.1) << endl;
 
return 0;
}
 
