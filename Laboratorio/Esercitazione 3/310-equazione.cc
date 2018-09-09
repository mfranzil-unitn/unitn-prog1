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
    float x1, x2, delta;

    cout << "Inserisci un numero: ";
    cin >> a;
    cout << "Inserisci un numero: ";
    cin >> b;
    cout << "Inserisci un numero: ";
    cin >> c;

    delta = ((b * b) - (4 * a * c));

    if (delta < 0) {
        cout << "ATTENZIONE: delta minore di 0" << endl;
    } else {
        if (a == 0) {
            cout << "ATTENZIONE: non e' un'equazione do secondo grado" << endl;
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            cout << x1 << " " << x2 << endl;
        }
    }
    return (0);
}
