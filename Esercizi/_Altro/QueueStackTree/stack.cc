#include <iostream>
#include "stack.h"

using namespace std;

bool empty(const stack &s)
{
	bool res = 0;
	if (s == NULL)
		res = 1;
	return res;
}

void init(stack &s)
{
	s = NULL;
}

void deinit(stack &s)
{
	stack tmp = s;
	while (tmp != NULL)
	{
		stack tmp2 = tmp;
		tmp = tmp->next;
		delete tmp;
	}
}

bool push(stack &s, int val)
{
	bool res;
	nodo_s * tmp = new (nothrow) nodo_s;
	if (tmp == NULL)
	{
		res = 0;
	}
	else
	{
		tmp->val = val;
		tmp->next = s;
		s = tmp;
		res = 1;
	}
	return res;
}

bool pop(stack &s)
{
	bool res;
	if (empty(s))
	{
		res = 0;
	}
	else
	{
		nodo_s * tmp = s;
		s = s->next;
		delete tmp;
		res = 1;
	}
	return res;
}

bool top(const stack &s, int &result)
{
	bool res;
	if (empty(s))
	{
		res = 0;
	}
	else
	{
		result = s->val;
		res = 1;
	}
}

void print(const stack &s)
{
	if (s != NULL)
	{
		cout << s->val << endl;
		print(s->next);
	}
}