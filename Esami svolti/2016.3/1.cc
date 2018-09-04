#include <iostream>
#include <iomanip>
using namespace std;

double valoreAssoluto(double valore);
double pot(double x, int n);
double fatt(double x);
double seno_iperbolico(double x, int nmax, double epsilon);
void seno_iperbolico_ric(double x, int nmax, double epsilon, double & res);

int main () {
  double epsilon, x;
  int nmax;

  cout << "Inserisci il massimo numero di termini dell'approssimazione nmax: ";
  cin >> nmax;
  cout << "Inserisci l'errore massimo epsilon: ";
  cin >> epsilon;

  char c;
  do {
    cout << "Inserisci il valore x in cui vuoi calcolare sinh(x): ";
    cin >> x;
    cout << "L'approssimazione di sinh(x) e': " << setprecision(10) 
         << seno_iperbolico(x, nmax, epsilon) << endl;
    cout << "Continuare (s/n)? ";
    cin >> c;
  } while(c != 'n' && c != 'N');

  return(0);
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

double fatt(double x) {
  // Fattoriale (ricorsivo)
  if (x == 0.0) {
    return 1.0;
  } else {
    return x * fatt(x - 1);
  }
}

double seno_iperbolico(double x, int nmax, double epsilon) {
	double res = 0;
	seno_iperbolico_ric(x, nmax, epsilon, res);
	return res;
}


void seno_iperbolico_ric(double x, int nmax, double epsilon, double & res)
{
	double last = res;
	res += (pot(x,2*nmax+1)/fatt(2*nmax+1));
	cout << res;
	if (nmax > 0 && (valoreAssoluto(x-last) >= epsilon * valoreAssoluto(last))) {
		seno_iperbolico_ric(x, nmax-1, epsilon, res);
	}
}