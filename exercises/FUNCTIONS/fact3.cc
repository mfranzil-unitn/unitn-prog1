using namespace std;
#include <iostream>

//calcolo del fattoriale

long long fact(int num) 
{
  long long fattoriale = 1;
  for (int i=1; i<=num; i++)
    fattoriale *= i;
  return fattoriale;
}

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

