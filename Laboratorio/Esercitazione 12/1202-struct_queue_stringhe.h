#ifndef STRUCT_QUEUE_STRINGHE_H
#define STRUCT_QUEUE_STRINGHE_H

static const int DIM_MAX = 100;

struct queue 
{
  int head, tail;
  char* elem[DIM_MAX];
};

enum retval { FAIL, OK };

void init (queue &);
retval enqueue(char*,queue &);
retval first(char* &,const queue &);
retval dequeue(queue &);
void print (const queue &);
void deinit (queue &);

#endif
