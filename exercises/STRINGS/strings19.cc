using namespace std;
#include <iostream>
#include <cstring>

//  Test-driver for the strcmp() function:
int main()
{
 
  const int size = 80;
  char s1[size] = "Paolo";
  char s2[size];

  do {
    cout << "parola da confrontare con `Paolo'?: ";
    cin >> s2; 
    int val = (strcmp(s2,s1));
    if (val<0) 
      cout << s2 << " viene prima di `Paolo'\n";
    else if (val==0)
      cout << s2 << " e` uguale a `Paolo'\n";
    else  
      cout << s2 << " viene dopo di `Paolo'\n";
  } while (!cin.eof());
}

