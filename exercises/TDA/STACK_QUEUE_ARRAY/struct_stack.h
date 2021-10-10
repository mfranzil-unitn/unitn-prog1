#ifndef STRUCT_STACK_H
#define STRUCT_STACK_H

using namespace std;
#include <iostream>

enum retval {FAIL,OK};

static const int dim = 100;

struct stack 
{
  int indice;
  int elem[dim];
};

void init(stack & );
retval push (int, stack &);
retval top (int &, const stack &);
retval pop (stack &);
void print(const stack &);


#endif
