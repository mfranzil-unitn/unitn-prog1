//
// Presi in input da tastiera due interi a e b
// calcolare tramite apposita funzione il
// minimo comune multiplo tra a e b
// la dichiarazione di questa funzione sara'
// int mcm (int,int);
//

#include <iostream>

using namespace std;

// dichiarazione di funzione
int massimo(int, int);
int mcm(int, int);

// dichiarazione funzione principale
int main() {
    int a, b, pippo;

    cout << "Inserisci un intero: ";
    cin >> a;
    cout << "Inserisci un intero: ";
    cin >> b;

    pippo = mcm(a, b);
    cout << pippo << endl;

    return (0);
}

//definizione funzione fibonacci
int massimo(int a, int b) {
    int app;

    if (a > b) {
        app = a;
    } else {
        app = b;
    }
    return (app);
}

int mcm(int a, int b) {
    int app = massimo(a, b);

    while (!((app % a == 0) && (app % b == 0))) {
        app++;
    }
    return (app);
}
