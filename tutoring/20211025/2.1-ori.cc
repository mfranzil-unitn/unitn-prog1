#include <iostream>
using namespace std;

void memorizza_array(int[], int);

// INSERIRE QUI LA DICHIARAZIONE DELLA FUNZIONE SEARCH

int main() {
    int target, found, loc, dim;
    int array[100];
    char risp;

    cout << "Inserisci il numero di interi da memorizzare nell'array: ";
    cin >> dim;

    memorizza_array(array, dim);

    do {
        cout << "Inserisci l'intero di cui cercare il primo multiplo: ";
        cin >> target;

        found = search(array, target, dim, 0);

        if (found != -1) {
            cout << "Il primo multiplo di " << target << " trovato è " << array[found] << endl;
            cout << "e sitrova nella posizione [" << found << "]." << endl;
        } else {
            cout << "Non è stato trovato nessun multiplo di " << target << endl;

            cout << "Vuoi ripetere la ricerca? (s/n) ";
             cin >> risp;
        }

    } while (risp == 's');

    return 0;
}

void memorizza_array(int array[100], int dim) {
    for (int i = 0; i < dim; i++) {
        cout << "Inserire intero " << i + 1 << ": ";
        cin >> array[i];
    }
}

// INSERIRE QUI LA DEFINIZIONE DELLA FUNZIONE SEARCH
