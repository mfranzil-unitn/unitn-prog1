using namespace std;
#include <iostream>

int main() 
{ 
  int num, ndiv2=0;
  cout << "Immetti un numero > 0: ";
  cin >> num;

  while ( num%2 == 0 ) {
    ndiv2++;
    num/=2;
  }
  cout << "E' divisibile " << ndiv2 
       << (ndiv2==1?" volta":" volte")
       << " per 2" << endl;
return 0;
}
