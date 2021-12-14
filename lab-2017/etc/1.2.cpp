#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, sol, sol2, det, rez, imz;
	// commentare
	cout << "Inserisci il coefficiente del termine di grado 2: ";
	cin >> a;
	cout << "Inserisci il coefficiente del termine di grado 1: ";
	cin >> b;
	cout << "Inserisci il termine noto: ";
	cin >> c;
	det = (b*b - (4 * a*c));
		if (det > 0)
		{
			sol = (-b + sqrt(det)) / (2 * a);
			sol2 = (-b - sqrt(det)) / (2 * a);
			cout << "L'equazione ha due soluzioni, pari a " << sol << " e " << sol2 << endl;
		}
		else if (det == 0)
		{
			sol = (-b) / (2 * a);
			cout << "L'equazione ha due soluzioni coincidenti, equivalenti a " << sol << endl;
		}
		else
		{
			rez = (-b) / (2 * a);
			imz = sqrt(0 - det) / (2 * a);
			cout << "L'equazione ha due soluzioni complesse e coniugate, " << rez << " + " << imz << "i e "  << rez << " - " << imz << "i\n";
		}
		return (0);
}
