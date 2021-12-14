#include <iostream> 
using namespace std;

int main()
{
  int a,b,c;
  bool d;
  cout <<  "Inserisci tre interi a, b, c:\n";
  cin >> a >> b >> c;
  d=(a>b)&&(a>c);
  cout << d << endl;
  return (0);
}

