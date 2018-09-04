using namespace std;

#include <iostream>
#include "3.h"

int main() {
	char res;
	float num;
	queue q;
	
	int maxdim = -1;
	while (maxdim <= 0) {
		cout << "Inserire il numero massimo di elementi della coda di float: ";
		cin >> maxdim;
	}
	
	init(q, maxdim);
	do {
		cout << "\nOperazioni possibili:\n"
			 << "Enqueue (e)\n"
			 << "Dequeue (d)\n"
			 << "First (f)\n"
			 << "Print (p)\n"
			 << "Quit (q)\n";
		cin >> res;
		switch (res) {
			case 'e':
				cout << "Valore: ";
				cin >> num;
				if (!enqueue(q, num)) {
					cout << "Coda piena!!!\n";
				}
				break;
			case 'd':
				if (!dequeue(q)) {
					cout << "Coda vuota!!\n";
				}
				break;
			case 'f':
				if (!first(q, num)) {
					cout << "Coda vuota!\n";
				} else {
					cout << "First = " << num << endl;
				}
				break;
			case 'p':
				print(q);
				break;
			case 'q':
				break;
			default:
				cout << "Valore errato!\n";
		}
	} while (res != 'q');
	
	deinit(q);
	
	return 0;
}
