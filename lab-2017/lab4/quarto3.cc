#include <iostream>

using namespace std;

int main()
{
	int intero, ultimointero, ciclo = 0;
	char i = 'y';
	cout << "Inserisci l'intero #1: ";
	cin >> intero;
	cout << "Vuoi continuare a valutare interi? (y)\n";
	cin >> i;
	while ( i == 'y')
		{
		cout << "Inserisci l'intero #" << ciclo+2 << ": ";
		ultimointero = intero;
		cin >> intero;
		if (ciclo == 10)
		{
		cout << "Ma non ti sei un po' rotto le balle? Sicuro di voler continuare? (y)\n";
		}
		else if (ciclo == 20)
		{
		cout << "Basta, ti supplico.....(y)\n";
		}
		else
		{
			cout << "Vuoi continuare a valutare interi? (y)\n";
		}
		cin >> i;
		if (intero <= ultimointero) { intero = ultimointero; } 
		ciclo++;
		}
	cout << "L'intero maggiore e' " << intero << endl;
	return 0;
}
