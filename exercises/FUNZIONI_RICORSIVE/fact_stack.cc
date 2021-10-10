using namespace std;
#include <iostream>

long long fatt (int n) 
{
  long long res;

cout << "fact(" << n << "), \n  &n = " << (long) &n << "\n&res = " << (long) &res  << endl; 

  if (n==0) 
    res = 1;
  else
    res = n * fatt(n-1);
  return res;
}

int main() 
{
  int n;
  cout << "n? ";
  cin >> n;
cout << "fact(" << n << "), \n  &n = " << (long) &n << "\n" << endl; 
  cout << "fattoriale(" << n << ") = " << fatt(n) << endl;
return 0;
}

