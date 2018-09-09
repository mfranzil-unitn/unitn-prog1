//
// Stampare i primi n elementi della serie di Fibonacci
// scrivendo il codice associato al calcolo della serie
// di Fibonacci in un'apposita funzione
//

#include <iostream>

using namespace std;

// prototipo di funzione
void fibonacci(int);

// dichiarazione funzione principale
int main() {
    int n;

    cout << "Quanti elementi della successione di Fibonacci devo generare? ";
    cin >> n;

    if (n >= 1) {
        cout << "1 ";
        if (n >= 2) {
            cout << "1 ";
            if (n >= 3) {
                fibonacci(n);
            }
        }
    }
    cout << endl;
    return (0);
}

//dichiarazione funzione fibonacci

void fibonacci(int n) {
    int i, ultimo, penultimo, appoggio;

    penultimo = 1;
    ultimo = 1;
    for (i = 2; i < n; i++) {
        appoggio = ultimo + penultimo;
        penultimo = ultimo;
        ultimo = appoggio;
        cout << ultimo << " ";
    }
}
