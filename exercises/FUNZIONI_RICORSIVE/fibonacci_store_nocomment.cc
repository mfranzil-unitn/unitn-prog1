using namespace std;
#include <iostream>

const int maxdim = 100;
long stored[maxdim] = {};

long f (int n) 
{
  long res;
  
  if (stored[n]!=0) 
    res = stored[n];
  else {
    if (n==0||n==1) 
       res = 1;
    else
       res = f(n-1)+f(n-2);
    stored[n]=res;
  }

  return res;
}

int main() 
{
  long n;
  cout << "n? ";
  cin >> n;
  cout << "f(" << n << ") = " << f(n) << endl;
return 0;
}

