//
// Dato un intero da tastiera che rappresenta
// il prezzo di un bene, calcolare il
// prezzo ivato considerando l'IVA al 22%
// stampandolo a video
//

#include <iostream>
using namespace std;

int main() {
    int prezzo;
    float prezzo_ivato;

    cout << "Inserisci il prezzo: ";
    cin >> prezzo;

    prezzo_ivato = prezzo * 1, 22;

    cout << prezzo_ivato << endl;

    return (0);
}
