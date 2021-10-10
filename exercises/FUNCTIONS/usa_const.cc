using namespace std;
#include <iostream> 

void prova (int x, int & y, const int & z) 
{
  cout << "  x = " << x 
       << " y = " << y 
       << " z = " << z << endl;
  x = 10;
  y = 20;
// z = 30; // errore
  cout << "  x = " << x 
       << " y = " << y 
       << " z = " << z << endl;
}

int main() 
{
  int a=20,b=40,c=60;
  cout << " a = " << a 
       << " b = " << b  
       << " c = " << c << endl;
  prova (a,b,c);
  cout << " a = " << a 
       << " b = " << b  
       << " c = " << c << endl;
return 0;
}

