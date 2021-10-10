//  Example 4.11, page 100
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>
#include <cctype>

//  Prints the category to which the given character belongs:
void printCharCategory(char c)
{
  cout << "The character [" << c << "] is a ";
  if      (isdigit(c)) cout << "digit.\n";
  else if (islower(c)) cout << "lower-case letter.\n";
  else if (isupper(c)) cout << "capital letter.\n";
  else if (isspace(c)) cout << "white space character.\n";
  else if (iscntrl(c)) cout << "control character.\n";
  else if (ispunct(c)) cout << "punctuation mark.\n";
  else                 cout << "Error.\n";
}

int main()
{
  for (int c = 0; c < 128; c++)
    printCharCategory(c);
  return 0;
}
