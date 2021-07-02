#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, serie, result;
	cout << "Inserisci la variabile x:\n";
	cin >> x;
	for (int l = 0; l <= 100; l++)
	{
		serie = pow(-1, l) * ((1) / pow(x, l));
		result = result + serie;
	}
	cout << result;
	return (0);
}
