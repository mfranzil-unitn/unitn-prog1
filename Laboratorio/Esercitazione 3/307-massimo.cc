//
// Acquisire da tastiera due numeri reali
// calcolare il massimo tra questi due numeri
// e stamparlo a video
//

#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Inserisci un reale: ";
    cin >> a;
    cout << "Inserisci un reale: ";
    cin >> b;

    if (a >= b) {
        cout << "Il massimo e': " << a << endl;
    } else {
        cout << "Il massimo e': " << b << endl;
    }

    return (0);
}
