#include "stack.h"

static const int dim = 100;

static int indice, elem[dim];

static bool emptyp ()
{
  return (indice==0);
}

static bool fullp () 
{
  return (indice==dim);
}

void init ()
{
  indice = 0;
}

retval top (int &n) 
{
  retval res;
  if (emptyp())
    res = FAIL;
  else {
    n=elem[indice-1];
    res = OK;
  }
  return res;
}

retval push (int n) 
{
  retval res;
  if (fullp()) 
    res = FAIL;
  else {
    elem[indice++]=n;
    res = OK;
  }
  return res;
}
    
retval pop () 
{
  retval res;
  if (emptyp())
    res = FAIL;
  else {
    indice--;
    res = OK;
  }
  return res;
}
    
void print() 
{
  int i;
  for (i=0;i<indice;i++) 
    cout << elem[i] << " ";
  cout << endl;
}
