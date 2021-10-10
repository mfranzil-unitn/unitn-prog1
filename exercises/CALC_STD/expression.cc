using namespace std;
#include <iostream>
#include "entry.h"
#include "expression.h"



double evaluate_expression(expression & exp) {
  entry & e = exp->e;
  if (operatorp(e)) {
    double op1,op2;
    expression & left = exp->left;
    expression & right = exp->right;
    op1 = evaluate_expression(left);
    op2 = evaluate_expression(right);
    e.num = apply_operator(left->e,right->e,e);
  }
  return e.num;
}


expression compose_expression (const expression & exp1, const entry & op, const expression & exp2) {
  if (!operatorp(op)) {
    cout << "errore: `";
    print_entry(op); 
    cout << "' non e' un operatore!\n";
    return NULL;
  }
  else {
    expression exp;
    exp = new node_expression;
    exp->e=op;
    exp->left=exp1;
    exp->right=exp2;
    return exp;    
  }
}

retval read_expression (expression & exp) {
  retval res;
  entry e;
  read_entry(e);
  if (nump(e)) {
    exp = new node_expression;
    exp->e=e;
    exp->left=NULL;
    exp->right=NULL;
  }
  else if (openp(e)) { // e deve essere "("
    expression exp1, exp2;
    entry op, rpar;
    read_expression(exp1);
    read_entry(op);
    read_expression(exp2);
    read_entry(rpar);
    exp = new node_expression;
    exp->e=op;
    exp->left=exp1;
    exp->right=exp2;
  } 
  else {
    cout << "error: `(' espected instead of ";
    print_entry(e);
    exit(0);
  }
}

void print_expression(const expression & exp) {
  if (exp!=NULL) {
    if (nump(exp->e))
      print_entry(exp->e);
    else if (operatorp(exp->e)) {
      cout << "(";
      print_expression(exp->left);
      print_entry(exp->e);
      print_expression(exp->right);
      cout << ")";
    }
  }
}


