//  Example 6.7, page 162
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

//  EXTENDED BY ROBERTO SEBASTIANI 08.11.2016

using namespace std;
#include <iostream>

int& max(int& x, int& y)  // return type is reference to int
{ 
  return (x > y ? x : y); // m and n are non-local references
}

int main()
{
  int m = 44, n = 22;
  cout << m << ", " << n << ", " << max(m,n) << endl;
  max(m,n) = 55;        // changes the value of m from 44 to 55
  cout << m << ", " << n << ", " << max(m,n) << endl;

  m = 22, n = 44;
  cout << m << ", " << n << ", " << max(m,n) << endl;
  max(m,n) = 55;        // changes the value of n from 44 to 55
  cout << m << ", " << n << ", " << max(m,n) << endl;
  return 0;
}
