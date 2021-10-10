//  Example 7.7, page 192
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>
#include <cctype>

int main()
{
  char ch, pre = '\0';
  while (cin.get(ch)) {
    if (pre == ' ' || pre == '\n') 
       cout.put(char(toupper(ch)));
    else 
       cout.put(ch);
    pre = ch;
  }
  return 0;
}
