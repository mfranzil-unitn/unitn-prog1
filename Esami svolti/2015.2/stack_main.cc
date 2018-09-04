using namespace std;

#include <iostream>
#include "stack.h"

int main() {
	
	char scelta;
	stack s;
	int val;
	
	init(s);
	
	do {
		cout << "Operazioni possibili:\n"
			 << "u : push\n"
			 << "o : pop\n"
			 << "t : top\n"
			 << "p : print\n"
			 << "e : esci\n"
			 << "Che operazione vuoi eseguire? ";
		
		cin >> scelta;
		
		switch (scelta) {
			case 'u':
				cout << "Valore da inserire? ";
				cin >> val;
				push(s, val);
				break;
			case 'o':
				if (! pop(s))
					cout << "Stack vuoto!\n";
				else
					cout << "Pop ok!\n";
				break;
			case 't':
				if (! top(s, val))
					cout << "Stack vuoto!\n";
				else
					cout << "Top: " << val << endl;
				break;
			case 'p':
				cout << "Contenuto dello stack: ";
				print(s);
				break;
			default:
				if (scelta != 'e') {
					cout << "Operazione non valida: " << scelta << endl;
				}
		}
	} while (scelta != 'e');
	
	deinit(s);
	
	return 0;
}
