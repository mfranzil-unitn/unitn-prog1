//  Example 7.4, page 190
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

  char line[80];

int main()
{
  do {
    cin.getline(line, 80);
    if (*line) cout << "\t[" << line << "]\n";
  } while (*line);
  return 0;
}
