#include <iostream>
#include <cstring>
#include "02-struct_queue_stringhe.h"

using namespace std;

static int next(int index) 
{
  return (index+1)%DIM_MAX;
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

retval enqueue (char* s,queue & q) 
{ 
  retval res;
  if (fullp(q)) 
    res = FAIL;
  else {
    // Alloca un nuovo spazio per una copia
    // della stringa. Svantaggio: ora ho una 
    // dipendenza da cstring in questo modulo.
    q.elem[q.tail] = new char[strlen(s) + 1];
    strcpy(q.elem[q.tail], s);
    q.tail = next(q.tail);
    res=OK;
  }
  return res;
}

retval first(char* & s,const queue & q) 
{ 
  retval res;
  if (emptyp(q)) 
    res = FAIL;
  else {
    s = q.elem[q.head];
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

void deinit (queue & q) {
  int i;
  for (i=q.head;i!=q.tail;i=next(i)) 
    delete [] q.elem[i];
  init(q);
} 

void print (const queue & q) 
{
  int i;
  for (i=q.head;i!=q.tail;i=next(i)) 
    cout << q.elem[i] << " ";
  cout << endl;
}
