#include <iostream>
using namespace std;

/*
Consegna:
1) Scrivere una funzione ricorsiva count_even che ritorni il numero di numeri pari all'interno di un array di interi
2) Riscrivere la soluzione precedente questa volta utilizzando la ricorsione in coda

N.B. lo scheletro di questo esercizio è molto simile a ciò che si può trovare nell'esercizio sulla ricorsione all'esame
*/

const int LENGTH = 24;
//const int list[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
const int list[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,\
                         13, 13, 13, 13, 14, 13, 13, 12, 10, 13, 13, 13};

int count_even(int index) {
    int retval;

    if (index < LENGTH) {
        if (list[index] % 2 == 0) {
            retval = 1 + count_even(index + 1);
        } else {
            retval = 0 + count_even(index + 1);
        }
    } else {
        retval = 0;
    }
    return retval;
}

int count_even_tc(int index, int count) {
    int retval;

    if (index < LENGTH) {
        if (list[index] % 2 == 0) {
            retval = count_even_tc(index + 1, count + 1);
        } else {
            retval = count_even_tc(index + 1, count);
        }
    } else {
        retval = count;
    }
    return retval;
}

void wrapper() {
    cout << "Number of even number = " << count_even(0) << ", (tc) " << count_even_tc(0, 0) << endl;
}

int main() {
    wrapper();
}