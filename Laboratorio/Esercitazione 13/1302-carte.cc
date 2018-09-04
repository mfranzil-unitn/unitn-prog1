#include "02-carte.h"

static int next(int index) 
{
  return (index+1)%dim;
}

void init(queue & q) 
{
  q.tail=q.head=0;
}

static bool emptyp(const queue & q) 
{
  return (q.tail==q.head);
}

static bool fullp(const queue & q)
{
  return (next(q.tail)==q.head);
}

retval enqueue (Carta c,queue & q) 
{ 
  retval res;
  if (fullp(q)) 
    res = FAIL;
  else {
    q.elem[q.tail] = c;
    q.tail = next(q.tail);
    res=OK;
  }
  return res;
}

retval first(Carta & c,const queue & q) 
{ 
  retval res;
  if (emptyp(q)) 
    res = FAIL;
  else {
    c = q.elem[q.head];
    res=OK;
  }
  return res;
}

retval dequeue(queue & q) 
{ 
  retval res;
  if (emptyp(q)) 
    res = FAIL;
  else {
    q.head = next(q.head);
    res=OK;
  }
  return res;
}
