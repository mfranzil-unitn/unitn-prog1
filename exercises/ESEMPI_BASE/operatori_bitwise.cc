using namespace std;
#include <iostream>

int main ()        
{
  

  unsigned short int x = 12;
  unsigned short int y = 10;

  cout << "Parole a " << sizeof(short int)*8 << " bit:" << endl; 

  cout << "x = " << x << endl;    
  cout << "y = " << y << endl;    
  cout << "x|y = " << (x|y) << endl;
  cout << "x&y = " << (x&y) << endl;
  cout << "x^y = " << (x^y) << endl;
  cout << "~x = " << (~x) << endl;
  cout << "~x = " << (unsigned short)(~x) << endl;
  cout << "x>>2 = " << (x>>2) << endl;
  cout << "x<<2 = " << (x<<2) << endl;

return 0;
}
 

