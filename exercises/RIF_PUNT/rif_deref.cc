using namespace std;
#include <iostream>

int main()
{
  int n = 1;
  int* p = &n;  
  int& r = *p;  
  cout << "r = " << r << endl;

  int m = 2;
  p = &m; 
  cout << "r = " << r << endl;

  // Quanto vale r? 
  // r "segue" p? 
  return 0;
}
