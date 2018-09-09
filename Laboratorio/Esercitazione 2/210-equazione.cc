//
// Dati 3 interi a, b, c che corrispondono
// ai termini noti di un'equazione di
// secondo grado, calcolare le soluzioni
//

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    float x1, x2;

    cout << "Inserisci un numero: ";
    cin >> a;
    cout << "Inserisci un numero: ";
    cin >> b;
    cout << "Inserisci un numero: ";
    cin >> c;

    x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
    cout << x1 << x2 << endl;

    return (0);
}
