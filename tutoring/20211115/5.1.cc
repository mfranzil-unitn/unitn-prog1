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

void leggi_e_calcola_massimo(char nome_file[], int &massimo) {
    fstream fin, fout;
    char parola[200];

    fin.open(nome_file, ios::in);

    if (fin.fail()) {
        cout << "Errore nell'apertura del file " << nome_file << endl;
        exit(1);
    }

    int counter = 0; // contatore delle parole
    int numero; // Variabile temporanea per il numero letto
    massimo = 0; // Resetto il massimo

    while (fin >> parola) {
        counter++;
        numero = strlen(parola);
        // cout << numero << " ";
        if (numero > massimo)
            massimo = numero;
    }

    fin.close();

    if (counter != 0) {
        fout.open(nome_file, ios::out | ios::app);

        if (fout.fail()) {
            cout << "Errore nell'apertura del file " << nome_file << endl;
            exit(1);
        }

        for (int i = 0; i < massimo; i++) {
            fout << "+";
        }

        fout << endl;
        
        fout.close();
    }
        
}