#include "entry.h"

static bool isdouble(char * s,double & x) {
  return (sscanf(s,"%lf",&x) > 0);
}

int offp (const entry & e) 
{
  return (e.type==OFF);
}

int operatorp (const entry & e) 
{
  return (e.type==OPERATOR);
}


retval read_entry (entry & e)
{
  double num;
  retval res;
  char buffer[MaxDim];
  cin.getline(buffer,MaxDim);
  if (isdouble(buffer,num)) {
	e.type=NUM;
        e.num=num;
        res=OK;
  }
  else if (strlen(buffer)==1) { //operator or off or error
  switch (buffer[0]) //operator or off
    {
      case 'q':
        e.type=OFF;
        res=OK;
        break;
      case '+':
        e.type=OPERATOR;
        e.op=PLUS;
        res=OK;
        break;
      case '-':
        e.type=OPERATOR;
        e.op=MINUS;
        res=OK;
        break;
      case '*':
        e.type=OPERATOR;
        e.op=TIMES;
        res=OK;
        break;
      case '/':
        e.type=OPERATOR;
        e.op=DIVIDE;
        res=OK;
        break;
      default:
        res=FAIL;
        break;
    }
  }
  else { // neither num nor operator
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
  cout << endl;
}


void print_entry (const entry & e) 
{
  if (e.type==OPERATOR)
    print_operator(e.op);
  else
    cout << e.num << endl;
}


entry calcola(const entry & op1, const entry & op2, const entry & e) 
{
  entry res;
  res.type=NUM;
  switch (e.op) {
  case PLUS:
    res.num=op2.num+op1.num;
    break;
  case MINUS:
    res.num=op2.num-op1.num;
    break;
  case TIMES:
    res.num=op2.num*op1.num;
    break;
  case DIVIDE:
    if (op1.num==0.0) 
      cerr << "errore: divisione per 0!\n";
    else 
      res.num=op2.num/op1.num;
    break;
  }
  return res;
}
   
