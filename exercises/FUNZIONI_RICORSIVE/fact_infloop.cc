using namespace std;
#include <iostream>

int depth = 0;

void printspaces(int n) 
{ 
  for (int i=0;i<n;i++)
    cout << "   "; 
}

int fatt (int n) 
{
  int res;
  
depth++;
printspaces(depth); 
cout <<  "> fact(" << n << ")\n";

  if (n==0) 
    res = 1;
  else
    res = n * (n-1) * fatt(n-2);

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
  cout << "fattoriale(" << n << ") = " << fatt(n) << endl;
return 0;
}

