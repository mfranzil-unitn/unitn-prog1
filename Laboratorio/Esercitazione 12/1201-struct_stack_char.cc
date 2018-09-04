#include "01-struct_stack_char.h"

static bool emptyp (const stack & s)
{
  return (s.indice==0);
}

static bool fullp (const stack & s) 
{
  return (s.indice==dim);
}

void init (stack & s)
{
  s.indice = 0;
}

retval top (char &c, const stack & s) 
{
  retval res;
  if (emptyp(s))
    res = FAIL;
  else {
    c=s.elem[s.indice-1];
    res = OK;
  }
  return res;
}

retval push (char c, stack & s) 
{
  retval res;
  if (fullp(s)) 
    res = FAIL;
  else {
    s.elem[s.indice++]=c;
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
