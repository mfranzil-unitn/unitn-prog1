using namespace std;
#include <iostream>

#include "01-struct_stack_string.h"


static bool emptyp (const stack & s) {
  return (s == NULL);
}

void init(stack & s) {
  s = NULL;
}

retval top (char* &c,const stack & s) {
  retval res;
  if (emptyp(s))
    res=FAIL;
  else {
    c=s -> val;
    res=OK;
  }
  return res;
}

// memo: "new (nothrow) ..." restituisce NULL
// senza generare eccezioni se l'allocazione non va a buon fine
retval push (char* c,stack & s) {
  retval res;
  nodo * np = new (nothrow) nodo;
  if (np==NULL)
    res = FAIL;
  else {
    np -> val = c;
    np -> next = s;
    s = np;
    res = OK;
  }
  return res;
}

retval pop (stack & s) {
  retval res;
  if (emptyp(s))
    res=FAIL;
  else {
    nodo *first = s;
    s = s -> next;
    delete first; 	// liberare la memoria: cancella
    res=OK;             // l'oggetto puntato da first
  }		
  return res;
}

void print (const stack & s) 
{
  nodo *first = s;
  while (first!=NULL) {
    cout << first->val << endl;
    first = first -> next;
  }
}
