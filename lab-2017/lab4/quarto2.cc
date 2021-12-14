#include <iostream>

using namespace std;

int main()
{
	int intero, ultimointero;
	for(int i = 0; i < 10; i++)
		{
		cout << "Inserisci l'intero #" << i+1 << ": ";
		ultimointero = intero;
		cin >> intero;
		if (intero <= ultimointero) intero = ultimointero; 
		}
	cout << "\n\nL'intero maggiore e'" << intero << endl;
	return 0;
}
