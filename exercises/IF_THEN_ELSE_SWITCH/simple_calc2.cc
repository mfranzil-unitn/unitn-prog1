using namespace std;
#include <iostream>
int main() { 
  //semplice calcolatrice
  double op1, op2; char op;
  cout << "Immetti espressione del tipo \"operando1 operatore operando\": ";
  cin >> op1 >> op >> op2;
  switch (op)
  {
   case '+': cout << op1+op2; break;
   case '-': cout << op1-op2; break;
   case '*': cout << op1*op2; break;
   case '/': cout << op1/op2; break;
   default : cout << "Errore!";
  }
  cout << endl;
return 0;
}

