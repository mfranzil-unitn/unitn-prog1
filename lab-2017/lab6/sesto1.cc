#include <iostream>
#include <cmath>

using namespace std;

void dividi(int,int,int&,int&);

int main()
{
	int dividendo, divisore, quoziente = 0, resto = 0;
	cout << "Inserisci due numeri separati da uno spazio: ";
	cin >> dividendo >> divisore;
	dividi(dividendo,divisore,quoziente,resto);
	cout << "La divisione ha avuto quoziente " << quoziente << " con resto " << resto << endl;
	return 0;
}


void dividi(int dividendo, int divisore, int& quoziente, int& resto)
{
	quoziente = dividendo / divisore;
	resto = dividendo % divisore;
}
