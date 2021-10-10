using namespace std;
#include <iostream> 

  struct complex { double re, im; };


int main () 
{
  complex c = {2.5,2.5};
  complex c1; 
  complex *pc = &c; 

  cout << "c = ";
  cout << "  Re: " << c.re;
  cout << ", Im: " << c.im;
  cout << endl;

  c1 = c;
  cout << "c1 = ";
  cout << "  Re: " << c1.re;
  cout << ", Im: " << c1.im;
  cout << endl;
 
  pc->re = 3; 
  pc->im = 3; 

  cout << "c = ";
  cout << "  Re: " << c.re;
  cout << ", Im: " << c.im;
  cout << endl;

  cout << "c1 = ";
  cout << "  Re: " << c1.re;
  cout << ", Im: " << c1.im;
  cout << endl;

  return 0;
}

