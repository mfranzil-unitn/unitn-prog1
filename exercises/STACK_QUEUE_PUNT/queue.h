#ifndef QUEUE_H
#define QUEUE_H

// dichiarazioni per la gestine della coda di interi

using namespace std;
#include <iostream>

enum retval { FAIL, OK };

void init ();
retval enqueue(int);
retval first(int &);
retval dequeue();
void print ();

#endif




