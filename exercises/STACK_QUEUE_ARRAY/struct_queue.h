#ifndef STRUCT_QUEUE_H
#define STRUCT_QUEUE_H

// dichiarazioni per la gestine della coda di interi

using namespace std;
#include <iostream>

// NOTA: permette di contenere DIM elementi
//static const int DIM = 100;
static const int DIM = 4; // TEST

/* 
// Implementazione statica 
struct queue 
{
  int head, tail;
  int elem[DIM+1];
  int size = DIM+1;
};
*/

// Implementazione dinamica
struct queue 
{
  int head, tail;
  int * elem;
  int size;
};

enum retval { FAIL, OK };

void init (queue &);
void deinit (queue &);
retval enqueue(int,queue &);
retval first(int &,const queue &);
retval dequeue(queue &);
void print (const queue &);

#endif



