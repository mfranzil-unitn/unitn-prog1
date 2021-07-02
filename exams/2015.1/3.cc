#include "3.h"
#include <iostream>

using namespace std;

static int succ(int value, const queue &q)
{
	return ((value+1)%(q.dim));
}

static int fullp(const queue &q)
{
	return (succ(q.tail, q) == q.head);
}

static int emptyp(const queue &q)
{
	return (q.tail == q.head);
}

void init(queue &q, int maxdim)
{
	q.head = 0;
	q.tail = 0;
	q.dim = maxdim+1;
	q.elem = new float[q.dim];
}

void deinit(queue &q)
{
	delete[] q.elem;
}
bool enqueue(queue &q, float n)
{
	bool res;
	if (fullp(q))
	{
		res = 0;
	}
	else
	{
		q.elem[q.tail] = n;
		q.tail = succ(q.tail, q);
		res = 1;
	}
	return res;
}

bool dequeue(queue &q)
{
	bool res;
	if (emptyp(q))
	{
		res = 0;
	}
	else
	{
		q.head = succ(q.head, q);
		res = 1;
	}
	return res;
}

bool first(queue &q, float &out)
{
	bool res;
	if (emptyp(q))
	{
		res = 0;
	}
	else
	{
		out = q.elem[q.head];
		res = 1;
	}
	return res;
}

void print(const queue &q)
{
	cout << "[";
	if (q.tail >= q.head)
	{
		for (int i = q.head; i != q.tail; i = succ(i, q))
		{
			cout << q.elem[i] << ", ";
		}
}
