
#ifndef QUEUE_H
#define QUEUE_H

using namespace std;
#include <iostream>

#include "message.h"

static const int dim = 100;

struct queue 
{
  int head, tail;
  message * elem[dim];
};

enum retval { FAIL, OK };

bool emptyp(const queue & );
bool fullp(const queue & );
void init (queue &);
void deinit (queue &);
retval enqueue(message *,queue &);
retval dequeue(message *&,queue &);
void print (const queue &);

#endif



