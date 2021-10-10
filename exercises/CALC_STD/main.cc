using namespace std;
#include <iostream>
#include "entry.h"
#include "expression.h"


int main() {
  expression exp1, exp2, exp;
  double value;
  entry op;   
  do {
    cout << "1a espressione:\n";
    read_expression(exp1);
    cout << "espressione letta: `" ;
    print_expression(exp1);
    cout << "'" << endl;
    
    cout << "2a espressione:\n";
    read_expression(exp2);
    cout << "espressione letta: `" ;
    print_expression(exp2);
    cout << "'" << endl;

    cout << "operatore: ? ";
    read_entry(op);
    
    exp = compose_expression(exp1,op,exp2);
    cout << "espressione composta: `" ;
    print_expression(exp);
    cout << "'" << endl;

    value = evaluate_expression(exp);
    cout << "l'espressione vale: " << value << endl;
    cout << endl;


  } while (1);
}
