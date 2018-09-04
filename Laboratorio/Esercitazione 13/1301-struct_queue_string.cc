using namespace std;
#include <iostream>

#include "01-struct_queue_string.h"


static bool emptyp (const queue & Q) 
{
  return (Q.head == NULL);
}

void init(queue & Q)
{
  Q.head = NULL;
}

// memo: "new (nothrow) ..." restituisce NULL
// senza generare eccezioni se l'allocazione non va a buon fine
retval enqueue(char* s,queue & Q)
{
  retval res;
  node * np = new (nothrow) node;
  if (np==NULL)
    res = FAIL;
  else {
    np->val=s;
    np->next=NULL;
    if (emptyp(Q)) 
      Q.head=np;
    else 
      Q.tail->next=np;
    Q.tail=np;
    res = OK;
  }
  return res;
}

retval first(char* &s,const queue & Q)
{ 
  retval res;
  if (emptyp(Q))
    res = FAIL;
  else {
    s = Q.head->val;
    res = OK;
  }
  return res;
}

retval dequeue(queue & Q)
{ 
  retval res;
  if (emptyp(Q))
    res=FAIL;
  else {
    node * first;
    first = Q.head;
    Q.head = Q.head->next;
    delete first; 
    res=OK;
  }
  return res;
}

void print(const queue & Q) 
{ 
  if (!emptyp(Q)) {
    node * first=Q.head;
    do {
      cout << first->val << endl;
      first = first->next;
    } while (first != NULL);
  }
}
