#include <iostream>
#include <cstdlib>
#include "stack.h"
#include "queue.h"
#include "tree.h"

using namespace std;

int main()
{
	tree a;
	queue q;
	stack s;
	init(a);
	init(q);
	init(s);
	char choice;
	int elemento;
	bool resa, resq, ress;
	do
	{
		cout << "Operazioni consentite: \n";
		cout << "\t(i) Inserisci (a, q, s)\n";
		cout << "\t(s) Stampa (a, q, s)\n";
		cout << "\t(f) Primo (q, s)\n";
		cout << "\t(l) Cerca (a, q, s)\n";
		cout << "\t(n) Prossimo (q, s)\n";
		cout << "\t(e) Esci\n";
		cin >> choice;
		switch(choice)
		{
			case 'i':
				cout << "Elemento? ";
				cin >> elemento;
				resa = insert(a, elemento);
				resq = enqueue(q, elemento);
				ress = push(s, elemento);
				break;
			case 's':
				cout << "\nAlbero (ordinato):\n";
				print(a);
				cout << "Coda:\n";
				print(q);
				cout << "\nPila:\n";
				print(s);
				break;
			case 'f':
				resq = first(q, elemento);
				if (resq)
				{
					cout << "First della coda: " << elemento << endl;
				}
				else
				{
					cout << "COMPLETE AND UTTER FAILURE! TERMINATING..." << endl;
		//			exit(EXIT_FAILURE);
				}
				ress = top(s, elemento);
				if (ress)
				{
					cout << "Top della pila: " << elemento << endl;
				}
				else
				{
					cout << "COMPLETE AND UTTER FAILURE! TERMINATING..." << endl;
		//			exit(EXIT_FAILURE);
				}
				break;
			case 'l':
				cout << "Elemento da cercare: ";
				cin >> elemento;
				//cout << "Ricerca coordinata in entrambi i TDA..." << endl;
				resa = search(a, elemento);
				//resq = search(q, elemento);
				//ress = search(s, elemento);
				cout << "Ricerca nell'albero: " << (resa? "OK" : "FAIL") << endl;
				//cout << "Ricerca nella coda: " << (resq? "OK" : "FAIL") << endl;
				//cout << "Ricerca nella pila: " << (ress? "OK" : "FAIL") << endl;
				break;
			case 'n':
				resq = dequeue(q);
				if (resq)
				{
					cout << "Coda scorta con successo!\n";
				}
				else
				{
					cout << "COMPLETE AND UTTER FAILURE! TERMINATING..." << endl;
		//			exit(EXIT_FAILURE);
				}
				ress = pop(s);
				if (resq)
				{
					cout << "Stack popped con successo!\n";
				}
				else
				{
					cout << "COMPLETE AND UTTER FAILURE! TERMINATING..." << endl;
		//			exit(EXIT_FAILURE);
				}
				break;
			case 'e':
				break;
			default:
				cout << "GOD DAMN MORON THAT'S NOT AN OPTION!!!" << endl;
				break;
		}
	} while (choice != 'e');
	return 0;
}