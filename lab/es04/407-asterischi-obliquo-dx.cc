//
// Stampare a video n asterischi in
// obliquo destro
// NOTE: non usare setw e non usare /t
//

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Inserisci il numero di asterischi da stampare: ";
    cin >> numero;

    for (int i = 0; i < numero; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    cout << endl;

    return (0);
}
