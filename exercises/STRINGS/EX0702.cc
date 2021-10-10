//  Example 7.2, page 188
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int main()
{
  char s[] = "ABCD";
  for (int i = 0; i < 5; i++)
    cout << "s[" << i << "] = '" << s[i] << "'\n";
  return 0;
}
