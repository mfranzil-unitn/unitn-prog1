#ifndef __STRUCT_STACK_CHAR_H_
#define __STRUCT_STACK_CHAR_H_

using namespace std;
#include <iostream>

enum retval {FAIL,OK};

static const int dim = 100;

struct stack 
{
  int indice;
  char elem[dim];
};

void init(stack & );
retval push (char, stack &);
retval top (char &, const stack &);
retval pop (stack &);
void print(const stack &);


#endif
