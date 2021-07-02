#include "albero.h"
#include <iostream>

using namespace std;

void inizializza(Albero& t)
{
	t == NULL;
}

bool vuoto(const Albero &t)
{
	return (t == NULL);
}

bool inserisci(Albero &t, int val)
{
	bool res;
	if (vuoto(t))
	{
		t = new (nothrow) Nodo;
		if (vuoto(t))
		{
			res = 0;
			cout << "Dioporco!" << endl;
		}
		else
		{
			t->val = val;
			t->sx = NULL;
			t->dx = NULL;
			res = 1;
		}
	}
	else
	{
		if (val <= t->val)
			res = inserisci(t->sx, val);
		else
			res = inserisci(t->dx, val);
	}
	return res;
}

bool cerca(const Albero &t, int val)
{
	bool res;
	if (vuoto(t))
		res = 0;
	else if (val == t->val)
		res = 1;
	else if (val > t->val)
		res = cerca(t->dx, val);
	else
		res = cerca(t->sx, val);
	return res;
}

void stampa(const Albero &t)
{
	if (!vuoto(t))
	{
		stampa(t->sx);
		cout << t->val << endl;
		stampa(t->dx);
	}
}