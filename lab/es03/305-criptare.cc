//
// Acquisire da tastiera un carattere
// criptare questo carattere, decriptarlo
// e stamparlo a video
//

#include <iostream>
using namespace std;

int main() {
    char carattere;
    int codifica;

    cout << "Inserisci un carattere: ";
    cin >> carattere;

    codifica = (carattere - 60) * 3;

    carattere = (codifica / 3) + 60;

    cout << carattere << endl;

    return (0);
}
