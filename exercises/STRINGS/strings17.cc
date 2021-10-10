//  Example 7.17, page 202
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>
#include <cstring>

//  Test-driver for the strcat() function:
int main()
{
  char s1[] = "ABCDEFG";
  char s2[] = "XYZ";
  cout << "Before strcat(s1,s2):\n";
  cout << "\ts1 = [" << s1 << "], length = " << strlen(s1) << endl;
  cout << "\ts2 = [" << s2 << "], length = " << strlen(s2) << endl;
  strcat(s1,s2);
  cout << "After strcat(s1,s2):\n";
  cout << "\ts1 = [" << s1 << "], length = " << strlen(s1) << endl;
  cout << "\ts2 = [" << s2 << "], length = " << strlen(s2) << endl;
  return 0;
}

// NOTA: in questo esercizio c'e' un errore: trovarlo.
