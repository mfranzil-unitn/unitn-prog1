//
// Presi in input i valori interi della base
// e dell'altezza di un triangolo
// stampare a video l'area del triangolo
//

#include <iostream>
using namespace std;

int main() {
    int base, altezza;
    float area;

    cout << "Inserisci il valore di base: ";
    cin >> base;
    cout << "Inserisci il valore dell'altezza: ";
    cin >> altezza;

    area = base * altezza / 2.0;

    cout << "Il valore dell'area e' " << area << endl;

    return (0);
}
