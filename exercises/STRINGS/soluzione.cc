using namespace std;
#include <iostream>
#include <ctype.h>

const int nchar = 128;
int occurrences[nchar] = {};


int main()
{
  char ch;
  while (cin.get(ch)) 
    (occurrences[(int) ch])++;
  for (int i=0;i<nchar;i++) 
    if ((isalpha(char(i)) || ispunct(char(i))) && (occurrences[i]!=0))
      cout << "'" << char(i) << "' occurs " << occurrences[i] << " times.\n";
  cout << "All other characters occur 0 times\n";
  
  return 0;
}
