#include <iostream>
#include "stack.h"

using namespace std;

/* void init(stack &s, int maxdim);
void deinit(stack &s);
bool push(stack &s, double n);
bool top(const stack &s, double &out);
bool pop(stack &s);
void print(const stack &s); */

bool isempty(const stack &s)
{
	return (s.index == 0);
}

bool isfull(const stack &s)
{
	return (s.index == s.dim);
}

void init(stack &s, int maxdim)
{
	s.index = 0;
	s.dim = maxdim;
	s.elem = new double[maxdim];
}

void deinit(stack &s)
{
	delete[] s.elem;
}

bool push(stack &s, double n)
{
	bool result;
	if (isfull(s))
	{
		result = false;
	}
	else
	{
		s.elem[s.index] = n;
		(s.index)++;
		result = true;
	}
	return result;
}

bool top(const stack &s, double &out)
{
	bool result;
	if (isempty(s))
	{
		result = false;
	}
	else
	{
		out = s.elem[s.index-1];
		result = true;
	}
	return result;
}

bool pop(stack &s)
{
	bool result;
	if (isempty(s))
	{
		result = false;
	}
	else
	{
		s.index--;
		result = true;
	}
}

void print(const stack &s)
{
	cout << "[";
	for(int i = 0; i < s.index; i++)
	{
		cout << s.elem[i];
		if (i != (s.dim - 1)) 
			cout << ", ";
	}
	cout << "]" << endl;
}