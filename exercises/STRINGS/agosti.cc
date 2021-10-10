using namespace std;
#include <iostream>

int main()
{
  char ch;
  int count = 0;
  while (cin.get(ch))
    if (ch == 't' || ch == 'T') 
      ++count;
  cout << "Ci sono " << count << " 't' nel testo.\n";
  return 0;
}
