//
// Acquisire da tastiera un carattere e
// stamparlo a video.
// Inizializzare un carattere
// memorizzandoci il carattere a
// e stamparlo a video
//

#include <iostream>
using namespace std;

int main() {
    char carattere;

    cout << "Inserisci un carattere: ";
    cin >> carattere;

    cout << carattere << endl;

    carattere = 'a';
    cout << carattere << endl;

    return (0);
}
