#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, y = 1;
	int n;
	cout << "Inserisci il valore della tua variabile x: ";
	cin >> x;
	cout << "Inserisci il valore dell'esponente n intero: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		y *= x;
	}
	cout << y << endl;
	return (0);
}
