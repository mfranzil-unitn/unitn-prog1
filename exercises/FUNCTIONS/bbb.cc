using namespace std;
#include <iostream>

//calcolo del fattoriale

int fact(int x);

int main() 
{
  int  num;
  int fattoriale;
  
  cout << "Dammi il numero: ";
  cin >> num;
  fattoriale=fact(num);
  cout  << "Fact = "  << fattoriale   << endl;
return 0;
}

int fact(int x) 
{
  int fatt = 1;
  for (int i=1; i<=x; i++)
    fatt *= i;
  return fatt;
}
