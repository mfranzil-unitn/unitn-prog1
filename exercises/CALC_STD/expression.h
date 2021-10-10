#ifndef EXPRESSION_H
#define EXPRESSION_H

using namespace std;
#include <iostream>

#include <cstdlib>
#include <cstring>
#include <cerrno>
#include <ctype.h>

struct node_expression;

typedef node_expression * expression;

struct node_expression {
  entry e;
  expression left;
  expression right;
};


retval read_expression (expression & );
void print_expression(const expression & );
double evaluate_expression(expression &);
expression compose_expression (const expression &,const entry &, const expression &);


#endif


