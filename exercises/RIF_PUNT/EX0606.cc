//  Example 6.6, page 160
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int main()
{
  int n = 33;
  int* p = &n;  //  p points to n
  int& r = *p;  //  r is a reference for n
  cout << "r = " << r << endl;

  // Added by Roberto Sebastiani 27/10/2009
  int m = 34;
  p = &m;  //  p points to m
  cout << "r = " << r << endl;

  // Quanto vale r? 
  // r "segue" p? 
  return 0;
}
