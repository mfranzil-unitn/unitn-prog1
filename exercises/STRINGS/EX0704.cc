//  Example 7.4, page 190
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int main()
{
  char line[80];
  do {
    cin.getline(line, 80);
    if (line[0]!='\0') 
       cout << "\t[" << line << "]\n";
  } while (line[0]!='\0');
  return 0;
}
