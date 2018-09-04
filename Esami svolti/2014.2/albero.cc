#include "albero.h"
#include <iostream>

using namespace std;

void inizializza(albero &a)
{
	a = NULL;
}

bool vuoto(const albero &a)
{
	return (a == NULL);
}

bool inserisci(albero &a, int val)
{
	bool res;
	if (vuoto(a))
	{
		a = new (nothrow) nodo;
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
			res = inserisci(a->sx, val);
		else if (val <= a->val)
			res = inserisci(a->dx, val);
	}
	return res;
}

bool cerca(const albero &a, int val)
{
	bool res;
	if (vuoto(a))
		res = false;
	else if (a->val == val)
		res = true;
	else if (a->val > val)
		res = cerca(a->sx, val);
	else if (a->val < val)
		res = cerca(a->dx, val);
	return res;
}

void stampa(const albero &a)
{
	if (!vuoto(a))
	{
		stampa(a->dx);
		cout << a->val << endl;
		stampa(a->sx);
	}
}