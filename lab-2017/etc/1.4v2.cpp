#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	char a;
	cout << "\nAKINATOR\n\nPensa ad un numero intero tra 0 e 7, e lo indovinero'\nIl tuo numero e' minore o uguale a 4? [Rispondi con s/n] ";
	do {
		cin >> a;
	} while (a != 's' && a != 'n');
	if (a == 's') // 0, 1, 2, 3, 4
	{
		cout << "Bene, il tuo numero e' maggiore o uguale a 2? ";
		do
		{
			cin >> a;
		} while (a != 's' && a != 'n');

		if (a == 's') // 2, 3, 4
		{
			cout << "Ok, il tuo numero e' minore stretto di 4? ";
			do
			{
				cin >> a;
			} while (a != 's' && a != 'n');

			if (a == 's') // 2, 3
			{
				cout << "Il tuo numero e' maggiore stretto di 2? ";
				do
				{
					cin >> a;
				} while (a != 's' && a != 'n');

				if (a == 'n') // 2
				{
					cout << "Bene, il tuo numero e' uguale a 2.\n";
				}
				else // 3
				{
					cout << "Bene, il tuo numero e' uguale a 3. \n";
				}
			}
			else // 4
			{
				cout << "Allora il tuo numero e' uguale a 4!\n";
			}
		}
		else // 0,1
		{
			cout << "Il tuo numero e' 0? ";
			do
			{
				cin >> a;
			} while (a != 's' && a != 'n');
			if (a == 's') // 0
			{
				cout << "Indovinato! Il tuo numero e' 0!\n";
			}
			else // 1
			{
				cout << "Allora il tuo numero e' 1!\n";
			}
		}
	}
	else // 5, 6, 7
	{
		cout << "Il tuo numero e' minore stretto di 6? ";
		do
		{
			cin >> a;
		} while (a != 's' && a != 'n');

		if (a == 's') //5
		{
			cout << "Allora il tuo numero e' 5!\n";
		}
		else
		{
			cout << "Il tuo numero potrebbe essere 6, giusto? ";
			do
			{
				cin >> a;
			} while (a != 's' && a != 'n');
			if (a == 's') //6
			{
				cout << "Avevo ragione! Il tuo numero e' 6!\n";
			}
			else (a == 'n') // 7
				; {
				cout << "Allora il tuo numero deve essere per forza 7!\n";
			}
		}
	}
	return (0);
}
