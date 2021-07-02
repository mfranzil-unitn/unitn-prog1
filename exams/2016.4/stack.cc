#include <iostream>
#include "stack.h"

using namespace std;

void init(stack &s)
{
	s = NULL;
}

void deinit(stack &s)
{
	if (s != NULL)
	{
		node* tmp = s;
		s = s->next;
		delete s;
		deinit(s);
	}
}

void push(stack &s, int val)
{
	stack tmp = new node;
	tmp->val = val;
	tmp->next = s;
	s = tmp;
}

retval pop(stack &s)
{
	retval res;
	if (s == NULL)
	{
		res = FALSE;
	}
	else
	{
		stack tmp = s;
		s = s->next;
		delete tmp;
		res = TRUE;
	}
}

retval empty(const stack &s)
{
	return (s == NULL? TRUE : FALSE);
}

retval top(const stack &s, int &result)
{
	retval res;
	if (s == NULL)
	{
		res = FALSE;
	}
	else
	{
		result = s->val;
		res = FALSE;
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