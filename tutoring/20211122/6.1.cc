#include <iostream>
using namespace std;

// Inserire qui le DICHIARAZIONI delle funzioni
void somma_incrociata(int *risultato, int *primo, int *secondo, int dim);
void somma_incrociata_ric(int *risultato, int *primo, int *secondo, int start, int dim);
void stampa_array(int *array, int dim);

int main() {
    int primo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int secondo[10] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    int risultato[10];

    somma_incrociata(risultato, primo, secondo, 10);

    cout << "Le somme incrociate dei due array sono ";
    stampa_array(risultato, 10);
    cout << endl;

    return 0;
}

// Inserire qui le DEFINIZIONI delle funzioni

void somma_incrociata(int *risultato, int *primo, int *secondo, int dim) {
    somma_incrociata_ric(risultato, primo, secondo, 0, dim);
}

void somma_incrociata_ric(int *risultato, int *primo, int *secondo, int start, int dim) {
    if (dim > 0) {
        risultato[start] = (primo[start] + secondo[dim - 1]);
        somma_incrociata_ric(risultato, primo, secondo, start + 1, dim - 1);
    }
}

void stampa_array(int *array, int dim) {
    cout << "{ ";
    for (int i = 0; i < dim; i++) {
        cout << array[i] << " ";
    }
    cout << "}";
}
