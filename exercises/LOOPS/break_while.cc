using namespace std;
#include <iostream>

int main(){
  int a, b; char c;

  while (1) {
    cout<<"Inserisci due numeri: ";
    cin >> a >> b;
    cout << a << '+' << b << '=' 
         << a+b << '\n';
    cout<<"Vuoi continuare (s/n)? ";
    cin >> c; 
    if (c=='n') break;
  }
return 0;
}
