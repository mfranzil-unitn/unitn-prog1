#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "message.h"

using namespace std;

struct node
{
	item val;
	node * next;
};

struct queue 
{
	node * tail;
	node * head;
};

enum retval {FAIL, OK};

void init(queue &);
retval enqueue (queue &, item);
retval dequeue (queue &);
retval first (const queue &, item &);
void print(const queue &);

#endif