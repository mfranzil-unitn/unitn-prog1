//
// Acquisire da tastiera tre numeri reali
// calcolare il massimo tra questi tre numeri
// e stamparlo a video
//

#include <iostream>
using namespace std;

int main() {
    float a, b, c, max;

    cout << "Inserisci un reale: ";
    cin >> a;
    cout << "Inserisci un reale: ";
    cin >> b;
    cout << "Inserisci un reale: ";
    cin >> c;

    max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    cout << "Il massimo è: " << max << endl;

    return (0);
}
