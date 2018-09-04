#ifndef STRUCT_QUEUE_H
#define STRUCT_QUEUE_H

#include "01-struct_common.h"

using namespace std;
#include <iostream>

struct node {
char* val;
node * next;
};

struct queue 
{
  node * tail;
  node * head;
};

void init (queue &);
retval enqueue(char*,queue &);
retval first(char* &,const queue &);
retval dequeue(queue &);
void print (const queue &);

#endif



