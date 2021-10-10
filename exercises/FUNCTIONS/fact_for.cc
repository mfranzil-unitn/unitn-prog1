using namespace std;
#include <iostream>

//calcolo del fattoriale

int main() 
{
  int num;
  long long fattoriale;

  cout << "Dammi il numero: ";
  cin >> num;
  fattoriale=1;
  for (int i=1; i<=num; i++)
    fattoriale *= i;
  cout  << "Fact = "  << fattoriale   << endl;
  
return 0;
}
