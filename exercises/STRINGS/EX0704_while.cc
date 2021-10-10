//  Example 7.4, page 190
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int main()
{
  char line[80];
  while (cin.getline(line, 80)) {
    cout << "\t[" << line << "]\n";
  };
  return 0;
}
