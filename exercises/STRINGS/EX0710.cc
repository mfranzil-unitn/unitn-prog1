//  Example 7.10, page 196
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

// MODIFIED BY ROBERTO SEBASTIANI

using namespace std;
#include <iostream>

int main()
{
  char name[8][24];
  int count = 0;
  cout << "Enter at most 8 names with at most 23 characters:\n";
  while (cin.getline(name[count], 24)) 
    count++;
  cout << "The names are:\n";
  for (int i = 0; i < count; i++)
    cout << "\t" << i << ". [" << name[i] << "]" << endl;
  return 0;
}
