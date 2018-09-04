#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	unsigned int n, v1, densita;
	char asterisco = '*';
	cout << "Inserisci un intero n: ";
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		v1 = rand() % 127;
		asterisco = v1;
		cout << asterisco;
	}
	return 0;
}
