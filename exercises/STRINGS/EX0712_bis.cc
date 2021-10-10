//  Example 7.12, page 198
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int main()
{
  char name[][100] = { "George Washington", "John Adams", "Thomas Jefferson" };
    cout << "The names are:\n";
    for (int i = 0; i < 3; i++)
      cout << "\t" << i << ". [" << name[i] << "]" << endl;

  return 0;
}
