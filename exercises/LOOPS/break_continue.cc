//  Example 3.10, page 63
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int main()
{
  int n;
  for (;;) {
    cout << "Enter int: ";  cin >> n;
    if (n%2 == 0) 
      continue;
    else if (n%3 == 0) 
      break;
    cout << "\tBottom of loop.\n";
  }
  cout << "\tOutside of loop.\n";
  return 0;
}
