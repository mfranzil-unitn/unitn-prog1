//
// Acquisire da tastiera 2 interi a e b
// e stampare a video 1 se a e' il maggiore
// 0 altrimenti NON USANDO IF
//

#include <iostream>
using namespace std;

int main() {
    int a, b;
    bool risposta;

    cout << "Inserisci un intero: ";
    cin >> a;
    cout << "Inserisci un intero: ";
    cin >> b;

    risposta = (a > b);

    cout << risposta << endl;

    return (0);
}
