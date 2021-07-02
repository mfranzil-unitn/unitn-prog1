#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int MAX_LANCI = 5;

int die();
void gioca(int&, int&);
int gioca_ric(int, int&);

int main ()
{
	srand (time(NULL));

	int lanci = 0, somma = 0;
	gioca(lanci, somma);
	cout << "Il programma termina al lancio numero " << lanci << " con un punteggio massimo di " << somma << endl;
	return 0;
}

int die()
{
	int res;
	res = 1 + rand() % 6;
	return res;
}

void gioca(int& i, int& sum)
{
	i = gioca_ric(i, sum);
}

int gioca_ric(int i, int& sum)
{
	if(i < MAX_LANCI)
	{	
		int dado1, dado2;
		dado1 = die();
		dado2 = die();
		cout << "Lancio #" << i+1 <<":\tDado 1: " << dado1 << "\tDado 2: " << dado2 << "\tTotale: " << dado1+dado2 << endl;
		if (dado1+dado2 > sum)
			sum = dado1+dado2;
		if (dado1+dado2 != 12)
			i = gioca_ric(i+1, sum);
	}
	return i;
}