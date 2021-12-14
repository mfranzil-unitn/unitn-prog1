#include <iostream>
using namespace std;

int main()
{
	long double a,b,c;
	cout << "Inserisci tre numeri reali separati da uno spazio: ";
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a > b) && (a > c))
	{
		cout << "Il maggiore dei tre reali inseriti e' " << a << endl;
	}
	else if ((b > c) && (b > a))
	{
		cout << "Il maggiore dei tre reali inseriti e' " << b << endl;
	}
	else if ((c > b) && (c > a))
	{
		cout << "Il maggiore dei tre reali inseriti e' " << c << endl;
	}
	else
	{
		cout << "I tre numeri inseriti sono uguali" << endl;
	}
	return (0);
}
