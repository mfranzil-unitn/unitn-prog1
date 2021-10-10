using namespace std;
#include <iostream>

int main () 
{
  int n,d,resto,cond;
  cout << "Dammi due interi positivi n e d: ";
  cin >> n >> d;
  resto=n%d;
  cond=(resto==0);
  if (cond) 
    cout << "Il risultato e' " << n/d << endl;
return 0;
}
