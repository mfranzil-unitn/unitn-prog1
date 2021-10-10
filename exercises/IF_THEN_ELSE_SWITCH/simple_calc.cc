using namespace std;
#include <iostream>
int main() { //semplice calcolatrice
  double op1, op2; char op;
  cout << "Immetti espressione del tipo \"operando1 operatore operando\": ";
  cin >> op1 >> op >> op2;
  if (op=='+')
    cout << op1+op2;
  else if (op=='-')
    cout << op1-op2;
  else if (op=='*')
    cout << op1*op2;
  else if (op=='/')
    cout << op1/op2;
  else cout<<"Errore!";
  cout << endl;
return 0;
}
