using namespace std;
#include <iostream>

int main ()        
{
  
  int a,b,c,d; 
  a = b = c = d = 5; 

  cout << " a = " << a 
       << " b = " << b 
       << " c = " << c 
       << " d = " << d << endl;
  
  (a=(b=(c=(d=5))));

  cout << " a = " << a 
       << " b = " << b 
       << " c = " << c 
       << " d = " << d << endl;
  
return 0;
}
