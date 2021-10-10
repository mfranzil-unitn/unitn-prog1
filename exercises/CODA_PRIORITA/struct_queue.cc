#include "message.h"
#include "struct_queue.h"

static int next(int index) 
{
  return (index+1)%dim;
}

void init(queue & q) 
{
  q.tail=q.head=0;
}

bool emptyp(const queue & q) 
{
  return (q.tail==q.head);
}

bool fullp(const queue & q)
{
  return (next(q.tail)==q.head);
}

retval enqueue (message * n,queue & q) 
{ 
  if (fullp(q)) 
    return FAIL;
  q.elem[q.tail] = n;
  q.tail = next(q.tail);
  return OK;
}

retval dequeue(message *& n,queue & q) 
{ 
  if (emptyp(q)) 
    return FAIL;
  n = q.elem[q.head];
  q.head = next(q.head);
  return OK;
}

void print (const queue & q) 
{
  int i;
  for (i=q.head;i<q.tail;i=next(i)) {
    print_message(*(q.elem[i]));
  }
  cout << endl;
}

void deinit(queue & q) {
}

