//
// Presi in input i valori interi della base
// e dell'altezza di un rettangolo
// stampare a video l'area del rettangolo
//

#include <iostream>
using namespace std;

int main() {
    int base, altezza, area;

    cout << "Inserisci il valore di base: ";
    cin >> base;
    cout << "Inserisci il valore dell'altezza: ";
    cin >> altezza;

    area = base * altezza;

    cout << "Il valore dell'area e' " << area << endl;

    return (0);
}
