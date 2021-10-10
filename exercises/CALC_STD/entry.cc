#include <cstdio>
#include "entry.h"

bool operatorp (const entry & e) 
{
  return (e.type==OPERATOR);
}

bool openp (const entry & e) 
{
  return (e.type==OPEN);
}

bool closep (const entry & e) 
{
  return (e.type==CLOSE);
}

bool nump (const entry & e) 
{
  return (e.type==NUM);
}

static bool isdouble(char * s,double & x) {
  return (sscanf(s,"%lf",&x) > 0);
}


retval read_entry (entry & e)
{
  retval res = OK;
  double tmp;
  char buffer[MaxDim];
  
  cin >> buffer;

  //PARENTHESIS
  if (strcmp(buffer,"(")==0) 
    e.type=OPEN;
  else if (strcmp(buffer,")")==0) 
    e.type=CLOSE;
  //OPERATORS
  else if (strcmp(buffer,"+")==0) {
    e.type=OPERATOR;
    e.op=PLUS;
  }
  else if (strcmp(buffer,"-")==0) {
    e.type=OPERATOR;
    e.op=MINUS;
  }
  else if (strcmp(buffer,"*")==0) {
    e.type=OPERATOR;
    e.op=TIMES;
  }
  else if (strcmp(buffer,"/")==0) {
    e.type=OPERATOR;
    e.op=DIVIDE;
  }
  //NUMBERS
  else if (isdouble(buffer,tmp)) {
    e.type=NUM;
    e.num=tmp;
  }
  // OTHERS
  else {
    res=FAIL;
  }
  return res;
}


static void print_operator(Operator op) 
{
  switch (op){
    case PLUS:
      cout << '+';
      break;
    case MINUS:
      cout << '-';
      break;
    case TIMES:
      cout << '*';
      break;
    case DIVIDE:
      cout << '/';
      break;
    default:
      break;
  }
}


void print_entry (const entry & e) 
{
  switch(e.type) {
  case OPERATOR: 
    print_operator(e.op);
    break;
  case NUM: 
    cout << e.num;
    break;
  case OPEN: 
    cout << "(";
    break;
  case CLOSE: 
    cout << ")";
    break;
  }
}

double apply_operator(const entry & e1, const entry & e2, const entry & op) {
  double res;
  double n1=e1.num;
  double n2=e2.num;
  switch (op.op) {
  case PLUS: res= n1+n2;break;
  case MINUS: res= n1-n2;break;
  case TIMES: res= n1*n2;break;
  case DIVIDE: res= n1/n2;break;
  }
  return res;
}
