#include <iostream>
#include "stack.h"

using namespace std;

retval empty(const stack &s)
{
	retval res = FALSE;
	if (s == NULL)
		res = TRUE;
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

void push(stack &s, int val)
{
	node * tmp = new node;
	tmp->val = val;
	tmp->next = s;
	s = tmp;
}

retval pop(stack &s)
{
	retval res;
	if (empty(s))
	{
		res = FALSE;
	}
	else
	{
		node * tmp = s;
		s = s->next;
		delete tmp;
		res = TRUE;
	}
	return res;
}

retval top(const stack &s, int &result)
{
	retval res;
	if (empty(s))
	{
		res = FALSE;
	}
	else
	{
		result = s->val;
		res = TRUE;
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