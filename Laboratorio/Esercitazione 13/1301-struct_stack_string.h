#ifndef STRUCT_STACK_H
#define STRUCT_STACK_H

#include "01-struct_common.h"

using namespace std;
#include <iostream>

struct nodo{
  char* val;
  nodo *next;
};

typedef nodo * stack ;

void init(stack & );
retval push (char*, stack &);
retval top (char* &, const stack &);
retval pop (stack &);
void print(const stack &);

#endif
