using namespace std;
#include <iostream>

int main ()        
{

  char c,d;
  int l,m,n,o;
  float x,y;
  
  //n*2 = m*2; //non-lvalue in assignment
  c='A'; //ok
  d=c;   //ok
  l=3;   //ok
  m=l;   //ok
  n='A'; //accettato, ma errato
  y=3.4; //ok
  x='A'; //accettato, ma errato
  o=y;   //accettato, ma con qualche problema
  
  cout << "c = " << c << endl; 
  cout << "d = " << d << endl; 
  cout << "l = " << l << endl; 
  cout << "m = " << m << endl; 
  cout << "n = " << n << endl; 
  cout << "y = " << y << endl;
  cout << "x = " << x << endl;
  cout << "o = " << o << endl;
  
return 0;
}
