using namespace std;
#include <iostream>

//calcolo del fattoriale
long long fact(int x);

int main() 
{
  int  num;
  long long fattoriale;
  
  cout << "Dammi il numero: ";
  cin >> num;
  fattoriale=fact(num);
  cout  << "Fact = "  << fattoriale   << endl;
return 0;
}

long long fact(int x) 
{
  long long fatt = 1;
  for (int i=1; i<=x; i++)
    fatt *= i;
  return fatt;
}
