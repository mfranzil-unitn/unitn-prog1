#include "array_queue.h"
#include "queue.h"
#include "message.h"

#include <iostream>
using namespace std;

void printmessage(item & valore)
{
	cout << valore.message << " \\ " << "Priorità: " << valore.priorita << endl;
}

void readmessage(item & valore)
{
	int tmp, i = 0;
	cout << "Inserisci il nome del paziente: ";
	cin >> valore.message;
	do
	{
		cout << "Inserisci la priorita\t(0 = bianco, 1 = verde, 2 = giallo, 3 = rosso): ";
		cin >> tmp;
	} while (tmp < 0 || tmp > 3);
	switch (tmp)
	{
		case 0: valore.priorita = BIANCO; break;
		case 1: valore.priorita = VERDE; break;
		case 2: valore.priorita = GIALLO; break;
		case 3: valore.priorita = ROSSO; break;
		default: break;
	}
}