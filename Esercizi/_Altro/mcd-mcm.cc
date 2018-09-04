#include <iostream>
#include <cmath>

using namespace std;

int n1, n2; //variabili globali (per debugging)

int mcm(int, int);
int mcd(int, int);
int mcm2(int, int);

/*	if ((a == 0) || (b == 0))
{
cout << "L'mcm è pari a 0" << endl;
}
else
{
cout << "L'mcm è pari a " << mcm(a, b) << endl;
}
return 0;
}*/

int main()
{
	int n1, n2;
	char scelta;
	cout << "Inserisci una coppia di numeri separati da uno spazio: ";
	cin >> n1 >> n2;
	do
	{
		cout << "Cosa vuoi fare, MC[d] o mc[m]? ";
		cin >> scelta;
	}
	while (scelta != 'd' && scelta != 'm');

		if (scelta == 'm')
		{
			do
			{
				cout << "Che metodo vuoi usare? [s]ebastiani o [f]ranzil? ";
				cin >> scelta;
			}
			while (scelta != 's' && scelta != 'f');
				if (scelta == 's')
				{
					cout << mcm(n1, n2) << endl;
				}
				else
				{
					cout << mcm2(n1, n2) << endl;
				}

		}
		else
		{
			cout << mcd(n1, n2) << endl;
		}
		return 0;
}

int mcm(int a, int b)
{
	int tmp;
	tmp = a*b;
	for (int i = tmp; i >= max(a, b); i--)
	{
		if ((i%a == 0) && (i%b == 0))
		{
			tmp = i;
		}
	}
	return tmp;
}

int mcd(int  a, int  b)
{
	int resto;
	while (b != 0) {
		resto = a%b;
		a = b;
		b = resto;
	}
	return a;
}

int mcm2(int a, int b)
{
	int output;
	int denom = mcm(a, b);
	output = (a*b) / denom;
	return output;
}