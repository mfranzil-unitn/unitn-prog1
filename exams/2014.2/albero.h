#ifndef ALBERO_H
#define ALBERO_H

struct nodo;

typedef nodo* albero;

struct nodo
{
	int val;
	albero sx;
	albero dx;
};

void inizializza(albero &a);
bool vuoto(const albero &a);
bool inserisci(albero &a, int val);
bool cerca(const albero &a, int val);
void stampa(const albero &a);

#endif