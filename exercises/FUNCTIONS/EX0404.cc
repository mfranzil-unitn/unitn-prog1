//  Example 4.4, page 93
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

//  Returns the cube of the given integer:
int cube(int x)
{
  return x*x*x;
}

//  Test driver for the cube function:
int main()
{
  int n = 1;
  while (n != 0) {
    cin >> n;  
  cout << cube(n) << endl;
  }
  return 0;
}
