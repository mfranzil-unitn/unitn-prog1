#include <iostream>
using namespace std;

int main()
{
	char a;
	int b;
	cout << "Inserisci il tuo carattere minuscolo: ";
	cin >> a;
	if (a<='z' && a>='a')
	{
	a -= 'a'-'A');
	cout << a << endl;
	}
	else
	{
	cout << "Carattere non minuscolo!" << endl;
	}
	 
return (0);
}
