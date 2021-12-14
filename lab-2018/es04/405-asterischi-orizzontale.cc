//
// Stampare a video n asterischi in
// orizzontale
//

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Inserisci il numero di asterischi da stampare: ";
    cin >> numero;

    for (int i = 0; i < numero; i++) {
        cout << "*";
    }
    cout << endl;

    return (0);
}
