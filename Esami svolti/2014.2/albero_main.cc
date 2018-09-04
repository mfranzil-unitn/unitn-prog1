#include <iostream>
#include "albero.h"

using namespace std;

int main()
{
	char res;
	albero a;
	int val;
	inizializza(a);
	do
	{
		cout << "\nOperazioni possibili: \n";
		cout << " Inserimento (i)\n Ricerca (r)\n";
		cout << " Stampa ordinata (s)\n Fine (f)\n";
		cout << "--> ";
		cin >> res;
		switch (res)
		{
			case 'i':
				cout << "Valore: ";
				cin >> val;
				if (!inserisci(a,val))
					cout << "Operazione fallita!" << endl;
				break;
			case 'r':
				cout << "Valore: ";
				cin >> val;
				if (cerca(a, val))
					cout << "Valore " << val << " trovato!\n";
				else
					cout << "Valore non trovato!\n";
				break;
			case 's':
				if(vuoto(a))
					cout << "Albero vuoto!" << endl;
				else
					stampa(a);
				break;
			case 'f':
				break;
			default:
				cout << "Operazione errata!" << endl;
				break;
		}
	} while (res != 'f');
	return 0;
}