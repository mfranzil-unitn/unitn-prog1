#ifndef STRUCT_QUEUE_H
#define STRUCT_QUEUE_H

// dichiarazioni per la gestine della coda di interi

using namespace std;
#include <iostream>

static const int dim = 100;

struct queue 
{
  int head, tail;
  int elem[dim];
};

enum retval { FAIL, OK };

void init (queue &);
retval enqueue(int,queue &);
retval first(int &,const queue &);
retval dequeue(queue &);
void print (const queue &);

#endif



