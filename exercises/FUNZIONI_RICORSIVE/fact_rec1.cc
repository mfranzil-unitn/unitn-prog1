using namespace std;
#include <iostream>

long long fatt1 (int m, int n) { // calcola m*m+1*...*n
  if (n==0) return 1;
  if (m==n) return m;
  else return m*fatt1(m+1,n);
}

long long fatt (int n) {
  return fatt1 (1,n);
}


int main() 
{
  int n;
  cout << "n? ";
  cin >> n;
  cout << "fattoriale(" << n << ") = " << fatt(n) << endl;
return 0;
}

