using namespace std;
#include <iostream>

int main(){
  int a, b; 
  char c='s';

  while (c!='n') {
    cout<<"Inserisci due numeri: ";
    cin >> a >> b;
    cout << a << '+' << b << '=' 
         << a+b << '\n';
    cout<<"Vuoi continuare (s/n)? ";
    cin >> c; 
  }
return 0;
}
