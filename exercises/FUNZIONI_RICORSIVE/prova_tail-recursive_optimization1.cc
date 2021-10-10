using namespace std;
#include <iostream>

const int MAX = 10000000;

long long fatt (int n) 
{
  long long res;
  if (n==0) 
    return 1;
  else
    return n + fatt(n-1);
  return res;
}

int main() 
{
  cout << "fattoriale(" << MAX << ") = " << fatt(MAX) << endl;
return 0;
}

