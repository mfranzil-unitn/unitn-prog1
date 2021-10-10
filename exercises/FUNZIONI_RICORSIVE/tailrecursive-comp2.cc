using namespace std;
#include <iostream>

const int MAX = 10000000;

long long sum (int n) 
{
  long long res;
  if (n==0) 
    return 1;
  else
    return n + sum(n-1);
  return res;
}

int main() 
{
  cout << "sum(" << MAX << ") = " << sum(MAX) << endl;
return 0;
}

