using namespace std;
#include <iostream>

int depth = 0;

void printspaces(int n) 
{ 
  for (int i=0;i<n;i++)
    cout << "   "; 
}

long long f (int n) 
{
  long long res;
  
depth++;
printspaces(depth); 
cout << "> f(" << n << ")\n";

  if (n==0||n==1) 
    res = 1;
  else
    res = f(n-1)+f(n-2);

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
  cout << "f(" << n << ") = \n" << f(n) << endl;
return 0;
}

