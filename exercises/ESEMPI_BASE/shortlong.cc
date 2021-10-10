using namespace std;
#include <iostream>

int main ()        
{
  
  int n = 32768;           // 2^15
  short int m = 32768;
  int k = 2147483648;      // 2^31
  long int t = 2147483648;
  long long int w = 2147483648;
  
  cout << "n = " << n << ", size = " << sizeof(n) << endl;
  cout << "m = " << m << ", size = " << sizeof(m) << endl;
  cout << "k = " << k << ", size = " << sizeof(k) << endl;
  cout << "t = " << t << ", size = " << sizeof(t) << endl;
  cout << "w = " << w << ", size = " << sizeof(w) << endl;

return 0;
}
 

