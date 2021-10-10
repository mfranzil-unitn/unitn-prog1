#ifndef STRUCT_STACK_H
#define STRUCT_STACK_H

using namespace std;
#include <iostream>


enum retval {FAIL,OK};

struct nodo{
  int val;
  nodo *next;
};

typedef nodo * stack ;

void init(stack & );
retval push (int, stack &);
retval top (int &, const stack &);
retval pop (stack &);
void print(const stack &);

#endif
