//  Example 6.2, page 158
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int main()
{
  int n = 33;
  int& r = n;  //  r is a reference for n
  cout << "n = " << n << ", r = " << r << endl;
  --n;
  cout << "n = " << n << ", r = " << r << endl;
  r *= 2;
  cout << "n = " << n << ", r = " << r << endl;
  return 0;
}
