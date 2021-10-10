using namespace std;
#include <iostream>

int main () 
{
  int n,d;
  cout << "Dammi due interi positivi n e d: ";
  cin >> n >> d;
  if (n%d==0) 
    cout << "Il risultato e' " << n/d << endl;
return 0;
}
