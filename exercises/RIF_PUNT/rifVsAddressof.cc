//  Example 6.3, page 158
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int main()
{
  int n = 10;
  int& r = n;
  cout << " n = " << n << ", r = " << r << endl;
  cout << "&n = " << long(&n) << ", &r = " << long(&r) << endl;
  return 0;
}
