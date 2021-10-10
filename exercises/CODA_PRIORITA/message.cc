#include "message.h"

bool read_message(message & m) 
{
  bool res = true;
  cout << "messaggio? ";
  cin >> m.info;
  cout << "priorita'? ";
  cin >> m.priority;
  if ((m.priority<0)||(m.priority>=10))
    res =false;
  return res;
}

void print_message(const message & m) 
{
  cout << m.info << endl;
}




  
