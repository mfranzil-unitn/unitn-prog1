#include <iostream>
#include <cstdlib>
#include "person.h"
#include "tree.h"

using namespace std;

int main()
{
	tree t;
	char choice;
	init(t);
	do
	{
		cout << "Operazioni possibili: " << endl;
		cout << "\t[i] Inserisci persona" << endl;
		cout << "\t[c] Cerca persona (per cognome)" << endl;
		cout << "\t[s] Stampa la lista di persone" << endl;
		cout << "\t[x] Chiudi il programma" << endl;
		cin >> choice;
		if (choice == 'i')
		{
			item i;
			newentry(i);
			insert(t,i);
		}
		else if (choice == 'c')
		{
			item tmp;
			cout << "Inserisci il cognome da cercare: ";
			cin >> tmp.cognome;
			print(cerca(t, tmp));
		}
		else if (choice == 's')
		{
			print(t);
		}
	}
	while (choice != 'x');
	return 0;
}