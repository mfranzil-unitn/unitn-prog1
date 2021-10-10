using namespace std;
#include <iostream>

// Prova: compilare con "g++ ..." e "g++ -O2 ..." 
// (basta anche solo la differenza tra:
 // "g++ -O1 ..." e  "g++ -O1 -foptimize-sibling-calls ..." ) 
// e notare  la differenza!
// -O2 attiva -O1 e -foptimize-sibling-calls, che converte le tail-recursive 
// in iterative (tail-recursive reduction)

const int MAX = 10000000;

long long sum (int n) 
{
  long long res;
  if (n==0) 
    res = 0;
  else
    res = n + sum(n-1);
  return res;
}

int main() 
{
  cout << "sum(" << MAX << ") = " << sum(MAX) << endl;
return 0;
}

