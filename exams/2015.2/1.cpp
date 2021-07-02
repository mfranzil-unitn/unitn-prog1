#include <iostream>
#include <iomanip>

using namespace std;

double valoreAssoluto(double valore);
double pot(double x, int n);
double calcola(double x, int n, double epsilon);

int main() {
	double epsilon, x;
	int n;
	
	cout << "Inserisci il numero di termini dell'approssimazione: ";
	cin >> n;
	cout << "Inserisci l'errore massimo epsilon: ";
	cin >> epsilon;
	
	char c;
	do {
		cout << "Inserisci il valore x in cui vuoi calcolare f(x) = 1 / (1 - x) ^ 2: ";
		cin >> x;
		while (x >= 1 || x <= -1) {
			cout << "Valore errato, prego reintrodurre (-1 < x < 1): ";
			cin >> x;
		}
		cout << "L'approssimazione di f(x) e': ";
		cout << setprecision(10) << calcola(x, n, epsilon);
		cout << endl;
		cout << "Continuare (s/n)? ";
		cin >> c;
	} while (c != 'n' && c != 'N');
	
	return (0);
}

double valoreAssoluto(double valore) {
	return valore < 0 ? -valore : valore;
}

double pot(double x, int n) {
	// Potenza (ricorsiva)
	if (n == 0) {
		return 1.0;
	} else {
		return x * pot(x, n - 1);
	}
}

double calcola(double x, int n, double epsilon) {
	double res = 0.0, oldres = 0.0;
	int i = 0;
	do 
	{
		oldres = res;
		int indice = i + 1;
		res += indice*pot(x,indice-1);
		i++;
	} while ((valoreAssoluto(res-oldres) >= epsilon) && (i < n));

	return res;
}