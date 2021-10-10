//  Example 4.23, page 113
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

double p(double, double, double =0, double =0, double =0);

int main() 
{
  double x = 2.0003;
  cout << "p(x, 7) = " << p(x, 7) << endl;
  cout << "p(x, 7, 6) = " << p(x, 7, 6) << endl;
  cout << "p(x, 7, 6, 5) = " << p(x, 7, 6, 5) << endl;
  cout << "p(x, 7, 6, 5, 4) = " << p(x, 7, 6, 5, 4) << endl;
  return 0;
}

double p(double x, double a0, double a1, double a2, double a3)
{
  return a0 + (a1 + (a2 + a3*x)*x)*x;
}
