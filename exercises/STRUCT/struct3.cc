using namespace std;
#include <iostream> 

struct complex { double re, im; };

void print_complex (const complex & x) 
{
  cout << "  Re: " << x.re;
  cout << ", Im: " << x.im;
  cout << endl;
}

int main () 
{
  complex c = {2.5,2.5};
  complex c1; 
  complex *pc = &c; 

  cout << "c = ";
  print_complex(c);

  c1 = c;
  cout << "c1 = ";
  print_complex(c1);
  
  pc->re = 3; 
  pc->im = 3; 

  cout << "c = ";
  print_complex(c);
  cout << "c1 = ";
  print_complex(c1);

  return 0;
}

