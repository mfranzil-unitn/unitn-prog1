
#include <cstring>
#include <iostream>

using namespace std;
const int SIZE = 1000;

bool palindroma(char *stringa);

// Un suggerimento: questa è la firma della funzione. Differisce dalla funzione wrapper per due parametri,
// l ed r. Essi indicano la posizione sinistra e destra della sottostringa che stiamo correntemente analizzando
bool palindroma_rec(char *stringa, int l, int r);

int main() {
    int n;
    char a[SIZE];

    cout << "Inserisci una frase che ritieni palindroma: ";
    do {
        cin.getline(a, SIZE);
        
        if (palindroma(a)) {
            cout << "La frase " << a << " è palindroma" << endl;
        } else {
            cout << "La frase " << a << " non è palindroma" << endl;
        }

        cout << "Immetti un'altra frase che ritieni palindroma : ";
    } while (a[0] != '\0');
    return 0;
}

bool palindroma(char *stringa) {
    bool result = palindroma_rec(stringa, 0, strlen(stringa) - 1);
    return result;
}

// Inserire qui la definizione della funzione palindroma_rec (già dichiarata in alto)
