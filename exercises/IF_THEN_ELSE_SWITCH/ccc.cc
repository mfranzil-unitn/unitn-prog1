using namespace std;
#include <iostream>

int main () 
{
  int n,d,resto;
  cout << "Dammi due interi positivi n e d: ";
  cin >> n >> d;
  resto=n%d;  
  if (resto=0) 
    cout << "Il risultato e' " << n/d << endl;
return 0;
}
