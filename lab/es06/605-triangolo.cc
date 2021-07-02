//
// Acquisiti da tastiera 3 numeri interi
// verificare se questi 3 numeri interi
// possono essere le misure dei 3 lati
// di un triangolo.
// Tre numeri interi possono essere le misure
// di tre lati di un triangolo se la somma di due
// e' maggiore del terzo.
// NOTA: non usare array
//

#include <iostream>
using namespace std;
bool check_triangolo(int, int, int);

int main() {
    int l1, l2, l3;
    bool risultato;

    cout << "Inserisci un valore: ";
    cin >> l1;
    cout << "Inserisci un valore: ";
    cin >> l2;
    cout << "Inserisci un valore: ";
    cin >> l3;

    risultato = check_triangolo(l1, l2, l3);

    if (risultato == true) {
        cout << "Possono essere i lati di un triangolo" << endl;
    } else {
        cout << "NON possono essere i lati di un triangolo" << endl;
    }
    return (0);
}

bool check_triangolo(int l1, int l2, int l3) {
    bool risposta;

    if ((l1 > l2 + l3) || (l2 > l1 + l3) || (l3 > l2 + l1)) {
        risposta = false;
    } else {
        risposta = true;
    }
    return (risposta);
}
