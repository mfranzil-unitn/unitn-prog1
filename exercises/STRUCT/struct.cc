using namespace std;
#include <iostream> 

  struct complex { double re, im; };



int main () 
{
  complex c; 
  c.re = 2.5; 
  c.im = 2.5; 

  cout << "c = ";
  cout << "  Re: " << c.re;
  cout << ", Im: " << c.im;
  cout << endl;

  complex *pc = &c; 
  pc->re = 3; 
  pc->im = 3; 
  
  cout << "c = ";
  cout << "  Re: " << c.re;
  cout << ", Im: " << c.im;
  cout << endl;

  return 0;
}

