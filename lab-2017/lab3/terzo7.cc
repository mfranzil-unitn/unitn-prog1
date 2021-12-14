#include <iostream>
using namespace std;

int main()
{
	long double a,b;
	cout << "Inserisci due numeri reali separati da uno spazio: ";
	cin >> a;
	cin >> b;
	if (a > b)
	{
		cout << "Il maggiore dei due reali inseriti e' " << a << endl;
	}
	else if (a < b)
	{
		cout << "Il maggiore dei due reali inseriti e' " << b << endl;
	}
	else
	{
		cout << "I due numeri inseriti sono uguali" << endl;
	}
	return (0);
}
