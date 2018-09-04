#include "queue.h"
#include "array_queue.h"
#include "message.h"
#include <iostream>

using namespace std;

static bool isempty (const queue& q)
{
	return (q.head == NULL);
}

void init (queue& q)
{
	q.head = NULL;
}

retval enqueue (queue& q, item valore)
{
	retval res;
	node * tmp = new (nothrow) node;
	if (tmp == NULL)
	{
		res = FAIL;
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
		res = OK;
	}
	return res;
}

retval dequeue (queue& q)
{
	retval res;
	if (isempty(q))
	{
		res = FAIL;
	}
	else
	{
		node * tmp;
		tmp = q.head;
		q.head = q.head->next;
		delete tmp;
		res = OK;
	}
}

retval first (const queue& q, item & valore)
{
	retval res;
	if (isempty(q))
	{
		res = FAIL;
	}
	else
	{
		valore = q.head->val;
		res = OK;
	}
	return res;
}

void print (const queue& q)
{
	if (!isempty(q))
	{
		node * tmp = q.head;
		while (tmp != NULL)
		{
			printmessage(tmp->val);
			tmp = tmp->next;
		}
	}
}
