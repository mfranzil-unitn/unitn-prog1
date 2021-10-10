using namespace std;
#include <iostream>


long long f (int n) 
{
  long long fn,fnmenouno,fnmenodue;
  int i;
  
  if (n==0||n==1) 
    fn = 1;
  else {
    fnmenodue=1;
    fnmenouno=1;
    for (i=2;i<=n;i++){
      fn = fnmenouno+fnmenodue;
      fnmenodue = fnmenouno;
      fnmenouno = fn;
    }
  }
  return fn;
}

int main() 
{
  int n;
  cout << "n? ";
  cin >> n;
  cout << "f(" << n << ") = " << f(n) << endl;
return 0;
}

