#ifndef STACK_H
#define STACK_H

using namespace std;
#include <iostream>



void init();
void deinit ();
retval push (const entry &);
retval top (entry &);
retval pop ();
void print();
int length();


#endif
