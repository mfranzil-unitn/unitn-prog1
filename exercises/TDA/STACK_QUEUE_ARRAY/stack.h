#ifndef STACK_H
#define STACK_H

using namespace std;
#include <iostream>

enum retval {FAIL,OK};

void init();
retval push (int);
retval top (int &);
retval pop ();
void print();


#endif
