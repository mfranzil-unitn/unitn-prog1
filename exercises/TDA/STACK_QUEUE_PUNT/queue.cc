using namespace std;
#include <iostream>
#include "queue.h"

struct node {
int val;
node * next;
};

struct queue 
{
  node * tail;
  node * head;
};

static queue Q;

static bool emptyp () 
{
  return (Q.head == NULL);
}

void init()
{
  Q.head = NULL;
}

retval enqueue(int n)
{
// memo: "new (nothrow) ..." restituisce NULL
// senza generare eccezioni se l'allocazione non va a buon fine
  retval res;
  node * np = new (nothrow) node;
  if (np==NULL)
    res = FAIL;
  else {
    np->val=n;
    np->next=NULL;
    if (emptyp()) 
      Q.head=np;
    else 
      Q.tail->next=np;
    Q.tail=np;
    res = OK;
  }
  return res;
}

retval first(int &n)
{ 
  retval res;
  if (emptyp())
    res = FAIL;
  else {
    n = Q.head->val;
    res = OK;
  }
  return res;
}

retval dequeue()
{ 
  retval res;
  if (emptyp())
    res = FAIL;
  else {
    node * first;
    first = Q.head;
    Q.head = Q.head->next;
    delete first; 
    res = OK;
  }
  return res;
}

void print() 
{ 
  if (!emptyp()) {
    node * first=Q.head;
    do {
      cout << first->val << endl;
      first = first->next;
    } while (first != NULL);
  }
}

