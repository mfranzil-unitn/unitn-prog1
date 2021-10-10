//  Example 4.16, page 106
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

void f(int x, int& y) { x = 88; y = 99; }

int main()
{
  int a = 22, b = 33;
  cout << "a = " << a << ", b = " << b << endl;
  f(a,b);
  cout << "a = " << a << ", b = " << b << endl;
  return 0;
}
