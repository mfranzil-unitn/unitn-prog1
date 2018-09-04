#include <iostream>
#include <cstring>
#include "person.h"
#include "tree.h"

using namespace std;

void init(tree & t)
{
	t = NULL;
}

bool nullp(const tree & t)
{
	return (t == NULL);
}

retval insert(tree & t, item valore)
{
	retval res;
	if (nullp(t))
	{
		t = new (nothrow) nodo;
		if (nullp(t))
		{
			res = FAIL;
		}
		else
		{
			t->val = valore;
			t->right = NULL;
			t->left = NULL;
			res = OK;
		}
	}
	else if (strcmp(valore.cognome, t->val.cognome) <= 0)
	{
		res = insert(t->left, valore);
	}
	else if (strcmp(valore.cognome, t->val.cognome) > 0)
	{
		res = insert(t->right, valore);
	}
	return res;
}

tree cerca(const tree & t, item valore)
{
	tree res;
	if (nullp(t))
	{
		res = NULL;
	}
	else if (strcmp(valore.cognome, t->val.cognome) == 0)
	{
		res = t;
	}
	else if (strcmp(valore.cognome, t->val.cognome) <= 0)
	{
		res = cerca(t->left, valore);
	}
	else if (strcmp(valore.cognome, t->val.cognome) > 0)
	{
		res = cerca(t->right, valore);
	}
	return res;
}

 void print(const tree & t)
 {
 	if (!nullp(t))
 	{
 		print(t->left);
 		printentry(t->val);
 		print(t->right);
 	}
 }