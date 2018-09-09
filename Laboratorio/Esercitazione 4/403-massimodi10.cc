//
// Trovare il massimo tra 10 numeri interi
// inseriti da tastiera
// NOTE: non usare 10 o più variabili!
// NOTE: non usare array
//

#include <iostream>
using namespace std;

int main() {
    int massimo, numero;

    for (int i = 0; i < 10; i++) {
        cout << "Inserisci un intero: ";
        cin >> numero;

        if ((i == 0) || (numero > massimo)) {
            massimo = numero;
        }
    }

    cout << "Il massimo e': " << massimo << endl;
    return (0);
}
