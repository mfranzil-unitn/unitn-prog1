#ifndef ARRAY_QUEUE_H
#define ARRAY_QUEUE_H

#include <iostream>

#include "queue.h"
#include "message.h"

using namespace std;

struct prio_queue
{
	queue pqueue[4];
};

void boot(prio_queue & coda);
void enq_pri(prio_queue & coda, item & valore);
void extr_pri(prio_queue & coda, item & valore);
void print_pri(prio_queue & coda);

#endif