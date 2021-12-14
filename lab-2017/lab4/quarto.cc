#include <iostream>

using namespace std;

int main()
{
	char domanda;
	do {
		cout << "Helloissimo!\n";
		cout << "Vuoi scrivere Hello? (s/n)\n";
		cin >> domanda;
	} while (domanda == 's');
	return 0;
}
