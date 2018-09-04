#include "array_queue.h"
#include "queue.h"
#include "message.h"
#include <iostream>

using namespace std;

static const int size = 4; // 4 livelli di priorità

void boot(prio_queue & coda)
{
	for (int i = 0; i < size; i++)
	{
		init(coda.pqueue[i]);
	}
}

void enq_pri(prio_queue & coda, item & valore)
{
	readmessage(valore);
	int pri = valore.priorita;
	enqueue(coda.pqueue[pri], valore);
}

void extr_pri(prio_queue & coda, item & valore)
{
	retval res;
	for(int i = 3; (i >= 0) && (res != FAIL); i--)
	{
		res = first(coda.pqueue[i], valore);
		res = dequeue(coda.pqueue[i]);
	}
}

void print_pri(prio_queue & coda)
{
	for (int i = 3; (i>=0); i--)
	{
		cout << "Pazienti in priorità " << i << endl;
		print(coda.pqueue[i]);
	}
}