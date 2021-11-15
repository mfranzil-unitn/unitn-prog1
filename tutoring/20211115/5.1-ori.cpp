#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

void leggi_e_calcola_massimo(char nome_file[], int &massimo);

int main() {
    char nome_file[] = "input1.txt";
    int result = 0;
    leggi_e_calcola_massimo(nome_file, result);

    cout << "Il numero massimo in " << nome_file << " e': " << result << endl;
    return 0;
}

// Scrivere qui sotto la definizione della funzione "funzione"

// Scrivere qui sopra la definizione della funzione "funzione"