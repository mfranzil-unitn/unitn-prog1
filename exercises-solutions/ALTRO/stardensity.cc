#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	unsigned int n, v1, densita;
	char asterisco = '*', risposta = 'y';
	cout << "Inserisci un intero n: ";
	cin >> n;
	cout << "Inserisci la densità: ";
	cin >> densita;
	if (risposta = 'y')
	{
		for (int i = 0; i<n; i++)
		{
			v1 = rand() % 100;
			if (v1 <= densita)
			{	
				cout << asterisco;
			}
			 else 
			{
				cout << ' ';
			}
		}
	}
	return 0;
}
