using namespace std;
#include <iostream>

void stampa1 (int n) { //
  if (n>=0) { 
    stampa1(n-1);
    cout  << n << " ";
  }
} 

//Nota: necessita` del wrapper per l'"\endl"
void stampa (int n) {
  stampa1 (n);
  cout << endl;
}


int main() 
{
  int n;
  cout << "n? ";
  cin >> n;
  cout << "stampanumeri(" << n << ") = \n";
  stampa(n);
return 0;
}

