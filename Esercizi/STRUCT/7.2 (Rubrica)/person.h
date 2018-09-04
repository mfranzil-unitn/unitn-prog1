#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

const int stringsize = 100;

struct item
{
	char nome[stringsize];
	char cognome[stringsize];
	int numero;
};

void newentry(item &);
void printentry(item);

#endif