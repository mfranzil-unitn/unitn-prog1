#include <iostream>
using namespace std;

int main() {
	char domanda='n';
	do 
	{
		cout << "Hello!\n";
		cout << "Vuoi scrivere Hello? Scrivi s per farlo.\n";
		cin >> domanda;
	} 
	while (domanda == 's');
	return 0;
}
