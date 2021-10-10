using namespace std; 
#include <iostream>
#include <iomanip>

int main() 
{
  float       x1 = 0.123456789F;
  float       x2 = 0.123456789;

  double      y1 = 0.123456789F;
  double      y2 = 0.123456789;
  double      y3 = 0.123456789L;

  long double z1 = 0.123456789F;
  long double z2 = 0.123456789;
  long double z3 = 0.123456789L;
  
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
