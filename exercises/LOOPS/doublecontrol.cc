//  Example 3.7, page 61
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996
 
using namespace std;
#include <iostream>

int main()
{
  for (int m = 1, n = 8; m < n; m++, n--)
    cout << "m = " << m << ", n = " << n << endl;
  return 0;
}
