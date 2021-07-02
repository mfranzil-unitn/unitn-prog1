#include <iostream>
#include "array_queue.h"
#include "queue.h"
#include "message.h"

using namespace std;

static const int size = 4;

int main()
{
	char choice;
	item entry;
	prio_queue coda; // 0 = bianco, 1 = verde, 2 = giallo, 3 = rosso
	boot(coda);
	do
	{
		cout << "Operazioni possibili: " << endl;
		cout << "\t[q] Mostra la coda" << endl;
		cout << "\t[n] Nuovo paziente" << endl;
		cout << "\t[s] Servi paziente" << endl;
		cout << "\t[c] Chiudi l'ospedale: ";
		cin >> choice;
		if (choice == 'q')
		{
			print_pri(coda);
		}
		else if (choice == 'n')
		{
			enq_pri(coda, entry);
			cout << "Paziente inserito:\n";
			printmessage(entry);
			cout << endl;
		}
		else if (choice == 's')
		{
			extr_pri(coda, entry);
			cout << "Paziente servito: " << endl;
			printmessage(entry);z
	} while (choice != 'c');
	return 0;
}
