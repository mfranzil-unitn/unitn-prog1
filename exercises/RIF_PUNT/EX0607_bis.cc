//  Example 6.7, page 162
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int& max(int& m, int& n)       // return type is reference to int
{ 
  return (m > n ? m : n);    // m and n are non-local references
}

int main()
{
  // &m, &n 
  int m = 44, n = 22;
  cout << m << ", " << n << ", " << max(m,n) << endl;
  max(m,n) = 55;        // changes the value of m from 44 to 55
  cout << m << ", " << n << ", " << max(m,n) << endl;
  return 0;
}
