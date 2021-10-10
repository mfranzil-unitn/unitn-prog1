using namespace std;
#include <iostream>

long long fatt (int n) 
{
  long long res;
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
  cout << "fattoriale(" << n << ") = " << fatt(n) << endl;
return 0;
}

