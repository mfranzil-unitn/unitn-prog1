// -*- C++ -*-
#ifndef ALBERO_H 
#define ALBERO_H 

struct Nodo {
    int val;
    Nodo *sx;
    Nodo *dx;
};

typedef Nodo * Albero;

void inizializza(Albero &a);
bool vuoto(const Albero &a);
bool inserisci(Albero &a, int val);
bool cerca(const Albero &a, int val);
void stampa(const Albero &a);

#endif
