using namespace std;
#include <iostream>

const int maxdim = 100;
long stored[maxdim] = {};

int depth = 0;

void printspaces(int n) 
{ 
  for (int i=0;i<n;i++)
    cout << "   "; 
}

long f (int n) 
{
  long res;
  
depth++;
printspaces(depth); 
cout << "> f("  << n << ")\n";

  if (stored[n]!=0) 
    res = stored[n];
  else {
    if (n==0||n==1) 
       res = 1;
    else
       res = f(n-1)+f(n-2);
    stored[n]=res;
  }

printspaces(depth); 
cout << "< " <<  res << endl;
depth--;

  return res;
}

int main() 
{
  int n;
  cout << "n? ";
  cin >> n;
  cout << "f(" << n << ") = " << f(n) << endl;
return 0;
}

