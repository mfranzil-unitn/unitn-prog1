using namespace std;
#include <iostream>

int main ()        
{
  char l = 'a'; 
  l += 3; // l diventa 'd' 
  cout << "l = " << l << endl;
 
  l--;    // l diventa 'c' 
  cout << "l = " << l << endl;
  l-='a'-'A'; // l diventa 'C'
  cout << "l = " << l << endl;

// test: l e' una lettera minuscola? 
  cout << ((l >= 'a')&&(l <= 'z')) << endl;
// test: l e' una lettera maiuscola? 
  cout << ((l >= 'A')&&(l <= 'Z')) << endl;
// test: l e' una cifra? 
  cout << ((l >= '0')&&(l <= '9')) << endl;
return 0;
}
