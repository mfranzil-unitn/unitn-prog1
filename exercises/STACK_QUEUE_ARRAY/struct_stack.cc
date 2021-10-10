#include "struct_stack.h"

static bool emptyp (const stack & s)
{
  return (s.indice==0);
}

static bool fullp (const stack & s) 
{
  return (s.indice==dim);
}

/* 
// Implementazione statica ////
void init (stack & s)
{
  s.indice = 0;
}

void deinit (stack & s)
{
}
///////////////////////////
*/

// Implementazione dinamica ////
void init (stack & s)
{
  s.indice = 0;
  s.elem = new int[dim];
}

void deinit (stack & s)
{
  delete [] s.elem;
}
///////////////////////////

retval top (int &n, const stack & s) 
{
  retval res;
  if (emptyp(s))
    res = FAIL;
  else {
    n=s.elem[s.indice-1];
    res = OK;
  }
  return res;
}

retval push (int n, stack & s) 
{
  retval res;
  if (fullp(s)) 
    res = FAIL;
  else {
    s.elem[s.indice]=n;
    s.indice++;
    res = OK;
  }
  return res;
}
    
retval pop (stack & s) 
{
  retval res;
  if (emptyp(s))
    res = FAIL;
  else {
    s.indice--;
    res = OK;
  }
  return res;
}
    
void print(const stack & s) 
{
  int i;
  for (i=0;i<s.indice;i++) 
    cout << s.elem[i] << " ";
  cout << endl;
}
