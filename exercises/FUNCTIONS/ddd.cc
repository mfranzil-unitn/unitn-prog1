using namespace std;
#include <iostream>
  int  num;
  int fattoriale;

//calcolo del fattoriale

int fact(int x) 
{
  int fatt = 1;
  for (int i=1; i<=x; i++)
    fatt *= i;
cout << num << " " << fattoriale << endl;
  
  return fatt;
}


int main() 
{

  cout << "Dammi il numero: ";
  cin >> num;
  fattoriale=fact(num);
  cout  << "Fact = "  << fattoriale   << endl;
return 0;
}
