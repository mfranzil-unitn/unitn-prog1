//
// Trovare il massimo tra una quantita'
// di numeri interi NON NOTA A PRIORI
// inseriti da tastiera
// NOTE: non usare 10 o più variabili!
// NOTE: non usare array
//

#include <iostream>
using namespace std;

int main() {
    int massimo, numero;
    char risposta = 'y';
    cout << "Inserisci un intero: ";
    cin >> massimo;
    cout << "Vuoi continuare [y/n] ";
    cin >> risposta;
    while (risposta == 'y') {
        cout << "Inserisci un intero: ";
        cin >> numero;

        if (numero > massimo) {
            massimo = numero;
        }
        cout << "Vuoi continuare [y/n] ";
        cin >> risposta;
    }

    cout << "Il massimo e': " << massimo << endl;
    return (0);
}
