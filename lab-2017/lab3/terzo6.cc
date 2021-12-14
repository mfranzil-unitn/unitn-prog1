#include <iostream>
using namespace std;

int main()
{
	long double a,b;
	cout << "Inserisci due numeri reali separati da uno spazio: ";
	cin >> a;
	cin >> b;
	if (b != 0)
	{
		a = a/b;
		cout << "Il quoziente è pari a " << a << endl;
	}
	else
	{
		cout << "Errore! I due numeri non sono divisibili tra loro." << endl;
	}
return (0);
}
