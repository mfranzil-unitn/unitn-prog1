//  Example 7.12, page 198
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

// NOTA: ORMAI DEPRECATO DALLO STANDARD ATTUALE:
// EX0712.cc:10: warning: deprecated conversion from string constant to ‘char*’

int main()
{
  char* name[] = { "George Washington", "John Adams", "Thomas Jefferson" };
    cout << "The names are:\n";
    for (int i = 0; i < 3; i++)
      cout << "\t" << i << ". [" << name[i] << "]" << endl;

  return 0;
}
