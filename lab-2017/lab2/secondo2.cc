#include <iostream> 
using namespace std;

int main()
{
  bool a,b,risultato;
  
  a=0;
  b=0;
  risultato=a||b;
  
  cout << "0 or 0\t=\t" << risultato << endl;
  
  a=1;
  b=0;
  risultato=a||b;

  cout << "0 or 1\t=\t" << risultato << endl;

  a=0;
  b=1;
  risultato=a||b;
  
  cout << "1 or 0\t=\t" << risultato << endl;

  a=1;
  b=1;
  risultato=a||b;

  cout << "1 or 1\t=\t" << risultato << endl;

  a=0; // inizio and
  b=0;
  risultato=a&&b;
  
  cout << "0 and 0\t=\t" << risultato << endl;
  
  a=1;
  b=0;
  risultato=a&&b;

  cout << "0 and 1\t=\t" << risultato << endl;

  a=0;
  b=1;
  risultato=a&&b;
  
  cout << "1 and 0\t=\t" << risultato << endl;

  a=1;
  b=1;
  risultato=a&&b;
 
  cout << "1 and 1\t=\t" << risultato << endl;
  a=0; // inizio not
  risultato=!a;
  
  cout << "not 0\t=\t" << risultato << endl;
  
  a=1;
  risultato=!b;
 
  cout << "not 1\t=\t" << risultato << endl;
  return (0);
}

