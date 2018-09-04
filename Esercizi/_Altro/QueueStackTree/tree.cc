#include "tree.h"
#include <iostream>

using namespace std;

void init(tree &a)
{
	a = NULL;
}

bool empty(const tree &a)
{
	return (a == NULL);
}

bool insert(tree &a, int val)
{
	bool res;
	if (empty(a))
	{
		a = new (nothrow) nodo_a;
		if (a == NULL)
			res = false;
		a->val = val;
		a->dx = NULL;
		a->sx = NULL;
		res = true;
	}	
	else
	{
		if (val > a->val)
			res = insert(a->sx, val);
		else if (val <= a->val)
			res = insert(a->dx, val);
	}
	return res;
}

bool search(const tree &a, int val)
{
	bool res;
	if (empty(a))
		res = false;
	else if (a->val == val)
		res = true;
	else if (a->val > val)
		res = search(a->sx, val);
	else if (a->val < val)
		res = search(a->dx, val);
	return res;
}

void print(const tree &a)
{
	if (!empty(a))
	{
		print(a->dx);
		cout << a->val << endl;
		print(a->sx);
	}
}