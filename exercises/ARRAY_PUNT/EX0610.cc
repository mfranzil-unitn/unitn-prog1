//  Example 6.10, page 164
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>


int main()
{
  short a[] = {22, 33, 44, 55, 66};
  cout << "a = " << a << ", *a = " << *a << endl;
  for (short* p = a; p < a + 5; p++)
    cout << "p = " << p << ", *p = " << *p << endl;
  return 0;
}
