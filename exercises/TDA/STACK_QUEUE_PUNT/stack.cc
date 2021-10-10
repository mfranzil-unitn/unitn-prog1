#include "stack.h"
using namespace std;
#include <iostream>


struct nodo{
  int val;
  nodo *next;
};

static nodo *stack;

static bool emptyp () {
  return (stack == NULL);
}

void init() {
  stack = NULL;
}

retval top (int &n) {
  retval res;
  if (emptyp())
    res = FAIL;
  else {
    n=stack -> val;
    res = OK;
  }
  return res;
}

// memo: "new (nothrow) ..." restituisce NULL
// senza generare eccezioni se l'allocazione non va a buon fine
retval push (int n) {
  retval res;
  nodo * np = new (nothrow) nodo;
  if (np==NULL) 
    res = FAIL;
  else {
    np -> val = n;
    np -> next = stack;
    stack = np;
    res = OK;
  }
  return res;
}

retval pop () {
  retval res;
  if (emptyp())
    res = FAIL;
  else {
    nodo *first = stack;
    stack = stack -> next;
    delete first; 	// liberare la memoria: cancella
    res = OK;		// l'oggetto puntato da first
  }
  return res;
}

void print () 
{
  nodo *first = stack;
  while (first!=NULL) {
    cout << first->val << endl;
    first = first -> next;
  }
}

    
  





