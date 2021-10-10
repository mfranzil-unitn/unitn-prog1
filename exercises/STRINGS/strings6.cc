//  Example 7.6, page 191
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int main()
{
  char ch;
  int count = 0;
  while (cin.get(ch))
    if (ch == 'e') 
      ++count;
  cout << count << " e's were counted.\n";
  return 0;
}
