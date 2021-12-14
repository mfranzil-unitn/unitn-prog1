//
// Acquisiti da tastiera due numeri interi
// scrivere una funzione con questa dichiarazione
// void dividi (int dividendo, int divisore,
//              int& quoziente, int& resto);
//

#include <iostream>
using namespace std;
void dividi(int dividendo, int divisore, int& quoziente, int& resto);

int main() {
    int dividendo, divisore, quoziente, resto;

    cout << "Inserisci un dividendo: ";
    cin >> dividendo;
    cout << "Inserisci un divisore: ";
    cin >> divisore;
    dividi(dividendo, divisore, quoziente, resto);
    cout << "Il risultato e': " << quoziente;
    cout << " resto " << resto << endl;
    return (0);
}

void dividi(int dividendo, int divisore, int& quoziente, int& resto) {
    quoziente = dividendo / divisore;
    resto = dividendo % divisore;
}
