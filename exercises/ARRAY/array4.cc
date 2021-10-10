//  Example 5.4, page 130
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int main()
{
  double a[4] = {22.2, 44.4};
  for (int i = 0; i < 4; i++)
    cout << "a[" << i << "] = " << a[i] << endl;
  return 0;
}
