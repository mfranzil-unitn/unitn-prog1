#ifndef MESSAGE_H
#define MESSAGE_H

#include <iostream>

using namespace std;
const int maxsize = 100;

enum pri {BIANCO, VERDE, GIALLO, ROSSO};

struct item
{
	char message[maxsize];
	pri priorita;
};

void printmessage(item &);
void readmessage(item &);

#endif