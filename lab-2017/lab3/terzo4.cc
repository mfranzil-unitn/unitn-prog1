#include <iostream>
using namespace std;

int main()
{
	char a;
	int b;
	cout << "Inserisci il tuo carattere maiuscolo: ";
	cin >> a;
	if (a<='Z' && a>='A')
	{
	a += 'a'-'A';
	cout << a << endl;
	}
	else
	{
	cout << "Carattere non minuscolo!" << endl;
	}
	 
return (0);
}
