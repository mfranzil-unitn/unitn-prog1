//
// Dati 3 interi che rappresentano
// le ore, i minuti ed i secondi
// di un certo esperimento calcolare
// il totalone dei secondi
//

#include <iostream>
using namespace std;

int main() {
    int secondi, minuti, ore;

    cout << "Inserisci le ore: ";
    cin >> ore;
    cout << "Inserisci i minuti: ";
    cin >> minuti;
    cout << "Inserisci i secondi: ";
    cin >> secondi;

    secondi += (ore * 3600) + (minuti * 60);

    cout << secondi << endl;

    return (0);
}
