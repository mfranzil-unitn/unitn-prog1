using namespace std;
#include <iostream>

// Programma semanticamente non corretto;

int main () 
{
  int a,b;
  cout << "dammi 2 interi a e b: ";
  cin >> a >> b ;
  if (a>0) 
    if (b>0) 
      cout << "a>0, b> 0" << endl;
  else
    cout << "a<=0" << endl;
return 0;
}
