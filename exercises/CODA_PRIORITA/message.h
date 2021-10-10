#ifndef MESSAGE_H
#define MESSAGE_H

using namespace std;
#include <iostream>


const int MaxInfoDim = 100;

struct message 
{
  char info[MaxInfoDim];
  int  priority;
};

bool read_message(message & );
void print_message(const message & );

#endif
