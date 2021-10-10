//  Example 7.13, page 198
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>
#include <cstring>

int main()
{
  char s[] = "ABC DEFG";
  cout << "strlen(\"" << s << "\") = " << strlen(s) << endl;
  cout << "strlen(\"\") = " << strlen("") << endl;
  char buffer[80];
  cout << "Enter string: ";  cin >> buffer;
  cout << "strlen(\"" << buffer << "\") = " << strlen(buffer) << endl;
  return 0;
}
