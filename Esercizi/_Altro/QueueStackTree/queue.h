#ifndef QUEUE_H
#define QUEUE_H

struct node_q
{
	int val;
	node_q * next;
};

struct queue 
{
	node_q * tail;
	node_q * head;
};

void init(queue &);
bool enqueue (queue &, int);
bool dequeue (queue &);
bool first (const queue &, int &);
void print(const queue &);

#endif