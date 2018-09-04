#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	char locale;
	cout << "\n\nBenvenuto nel BUONGIORNISSIMO KAFFEINATOR!\n\ni: Italiano\ne: English\ns: Espanol\nd: Deutsch\n\nInserisci la lingua: ";
	cin >> locale;
	switch (locale)
	{
		case 'i': cout << "\nBuongiorno!\n\n"; break;
		case 'e': cout << "\nGood morning!\n\n"; break;
		case 's': cout << "\nBuenos dias!\n\n"; break;
		case 'd': cout << "\nWillkommen!\n\n"; break;
		default: cout << "Nessuna lingua inserita!\n";
	}
	return (0);
}
