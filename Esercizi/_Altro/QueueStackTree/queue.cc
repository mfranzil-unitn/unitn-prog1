#include <iostream>
#include "queue.h"

using namespace std;

static bool isempty (const queue& q)
{
	return (q.head == NULL);
}

void init (queue& q)
{
	q.head = NULL;
}

bool enqueue (queue& q, int valore)
{
	bool res;
	node_q * tmp = new (nothrow) node_q;
	if (tmp == NULL)
	{
		res = 0;
	}
	else
	{
		tmp->val = valore;
		tmp->next = NULL;
		if (isempty(q))
		{
			q.head = tmp;
		}
		else
		{
			q.tail->next = tmp;
		}
		q.tail = tmp;
		res = 1;
	}
	return res;
}

bool dequeue (queue& q)
{
	bool res;
	if (isempty(q))
	{
		res = 0;
	}
	else
	{
		node_q * tmp;
		tmp = q.head;
		q.head = q.head->next;
		delete tmp;
		res = 1;
	}
}

bool first (const queue& q, int & valore)
{
	bool res;
	if (isempty(q))
	{
		res = 0;
	}
	else
	{
		valore = q.head->val;
		res = 1;
	}
	return res;
}

void print (const queue& q)
{
	if (!isempty(q))
	{
		node_q * tmp = q.head;
		while (tmp != NULL)
		{
			cout << tmp->val;
			tmp = tmp->next;
		}
	}
}
