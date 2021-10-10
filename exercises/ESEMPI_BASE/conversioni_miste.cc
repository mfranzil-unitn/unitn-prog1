using namespace std;
#include <iostream> 
#include <iomanip> 

int main ()         
{
  // provare poi a sostituire float con double
  float x,y;             
  int a,b;
  
  x = 3;
  cout << "x = " << x << endl;
  
  b = 2*3.6;
  cout << "b = " << b << endl;
  b = -2*3.9;
  cout << "b = " << b << endl;
  b = 2*int(3.9);
  cout << "b = " << b << endl;
  
  a = 2147483600; // 2^31-48
  cout << "a = " << setw(12) << a << endl;
  y = float(a);
  cout << "y = " << setw(12) << setprecision(12) << y << endl;
  a = int(y);
  cout << "a = " << setw(12) << a << endl;

  long long c=3;
  float z=3.5;
  cout << c*z << endl;
return 0;
}


