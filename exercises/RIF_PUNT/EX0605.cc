//  Example 6.5, page 160
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int main()
{
  int n = 33;
  int* p = &n;  //  p points to n
  cout << "*p = " << *p << endl;
  return 0;
}
