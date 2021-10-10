using namespace std;
#include <iostream>

int main ()        
{

double a = 2.2,b = -14.12e-2; 
double c = .57, d = 6.; 

//literal float 
//suffisso F (f) 
float g = -3.4F; 
float h = g-.89F; 
// literal long double 
// suffisso L (l)
long double i = +0.001; 
long double j = 1.23e+12L; 

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;
  cout << "g = " << g << endl;
  cout << "h = " << h << endl;
  cout << "i = " << i << endl;
  cout << "j = " << j << endl;
  
  // anche i reali hanno un range finito!
  g = 1000000000000000000000000000000000000000.0;
  cout << "g = " << g << endl;
return 0;
}
