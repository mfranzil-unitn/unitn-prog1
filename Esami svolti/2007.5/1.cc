#include <iostream>
#include <cmath>

using namespace std;

const int MAX_SIZE = 100;

void stampa_altezze(double altezze[MAX_SIZE], int dimensione);
double* calcola_altezze(int altezza_iniziale, int& dimensione);

int main()
{
	int dimensione, altezza_iniziale;
	double* altezze;

	cout << "Inserisci l'altezza iniziale dell'oggetto in metri: ";
	cin >> altezza_iniziale;
	altezze = calcola_altezze(altezza_iniziale, dimensione);
	stampa_altezze(altezze, dimensione);
	return 0;
}

void stampa_altezze(double altezze[MAX_SIZE], int dimensione)
{
	for(int i = 0; i < dimensione; i++)
		cout << "Dopo " << i << " secondi, l'oggetto è a un altezza pari a " << altezze[i] << endl;
}

double* calcola_altezze(int altezza_iniziale, int& dimensione)
{
	int tempo = round(sqrt(2*altezza_iniziale/9.8));
	cout << "Tempo stimato di caduta: " << tempo << endl;
	double* res = new (nothrow) double[tempo];
	for(int i = 0; i < tempo && i < 100; i++)
	{
		res[i] = altezza_iniziale - (0.5 * 9.8 * i * i);
	}
	dimensione = tempo;
	return res;
}