//  Example 7.3, page 189
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996
// MODIFIED BY ROBERTO SEBASTIANI

// VERSIONE CON "CIN-LOOP"

using namespace std;
#include <iostream>

int main()
{
  char word[80];
  while (cin >> word) {
    cout << "\t\"" << word << "\"\n";
  }
  return 0;
}
