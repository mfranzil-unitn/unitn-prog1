#include <iostream>
#include "person.h"

using namespace std;

void printentry(item valore)
{
	cout << endl << endl << "--------------------" << endl;
	cout << "Nome:\t\t" << valore.nome << endl;
	cout << "Cogn:\t\t" << valore.cognome << endl;
	cout << "Numero:\t\t" << valore.numero << endl;
	cout << "--------------------" << endl << endl;
}

void newentry(item & tmp)
{
	cout << "Inserisci il nome: ";
	cin >> tmp.nome;
	cout << "Inserisci il cognome: ";
	cin >> tmp.cognome;
	cout << "Inserisci il numero di telefono: ";
	cin >> tmp.numero;
}

