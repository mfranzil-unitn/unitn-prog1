using namespace std; 
#include <iostream>
#include <iomanip>

int main() 
{
  float       x1 = 11.1F;
  float       x2 = 11.1;

  double      y1 = 11.1F;
  double      y2 = 11.1;
  double      y3 = 11.1L;

  long double z1 = 11.1F;
  long double z2 = 11.1;
  long double z3 = 11.1L;
  
  cout << "x1 = " << fixed << setw(14) << setprecision(12) << x1 << endl;
  cout << "x2 = " << fixed << setw(14) << setprecision(12) << x2 << endl;
  cout << "y1 = " << fixed << setw(14) << setprecision(12) << y1 << endl;
  cout << "y2 = " << fixed << setw(14) << setprecision(12) << y2 << endl;
  cout << "y3 = " << fixed << setw(14) << setprecision(12) << y3 << endl;
  cout << "z1 = " << fixed << setw(14) << setprecision(12) << z1 << endl;
  cout << "z2 = " << fixed << setw(14) << setprecision(12) << z2 << endl;
  cout << "z3 = " << fixed << setw(14) << setprecision(12) << z3 << endl;

// interpretare il risultato dei seguenti output:
  cout << "(x1==x2)=" << (x1==x2) << endl;
  cout << "(y1==y2)=" << (y1==y2) << endl;
  cout << "(y2==y3)=" << (y2==y3) << endl;
  cout << "(z1==z2)=" << (z1==z2) << endl;
  cout << "(z2==z3)=" << (z2==z3) << endl;
  cout << "(x2==y2)=" << (x2==y2) << endl;
  cout << "(y2==z2)=" << (y2==z2) << endl;
  return 0;            
}
