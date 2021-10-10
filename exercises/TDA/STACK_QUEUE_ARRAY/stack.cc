#include "entry.h"
#include "stack.h"

static const int dim = 100;
static int indice;
entry elem[dim];

static bool emptyp ()
{
  return (indice==0);
}

static bool fullp () 
{
  return (indice==dim);
}

int length() 
{
  return indice;
}

void init ()
{
  indice = 0;
}

retval top (entry &n) 
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

retval push (const entry & n) 
{
  retval res;
  if (fullp()) 
    res = FAIL;
  else {
    elem[indice]=n;
    indice++;
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
  cout << "\nvvvvvvvvvvvv\n";
  for (i=0;i<indice;i++) 
    print_entry(elem[i]);
  cout << "^^^^^^^^^^^^\n";
}
