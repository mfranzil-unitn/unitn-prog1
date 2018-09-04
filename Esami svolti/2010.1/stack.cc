#include <iostream>
#include "stack.h"

using namespace std;

void init(stack &s)
{
	s = NULL;
}

void deinit(stack &s)
{
	nodo * n = s;
	while (n != NULL)
	{
		nodo * tmp = n;
		n = n->next;
		delete tmp;
	}
	s = NULL;
} 

bool empty(const stack &s)
{
	return s == NULL;
}

bool push(stack &s, int val)
{
	bool res;
	stack tmp = new (nothrow) nodo;
	if (tmp == NULL)
		res = 0;
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
	if(empty(s))
		res = 0;
	else
	{
		stack tmp = s;
		s = s->next;
		delete tmp;
		res = 1;
	}
	return res;
}


bool top(const stack &s, int &result)
{
	bool res;
	if(empty(s))
		res = 0;
	else
	{
		result = s->val;
		res = 1;
	}	
	return res;
}

void print(const stack &s)
{
	stack tmp = s;
	while(tmp != NULL)
	{
		cout << tmp->val << " ";
		tmp = tmp->next;
	}
	cout << endl;
}