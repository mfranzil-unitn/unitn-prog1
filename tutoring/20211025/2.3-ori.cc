#include <iostream>
#include <string>

using namespace std;

const char SEGNAPOSTO = '!';
const int DIMMAX = 40;

// Dichiarare qui sotto la funzione reverse_array

int main(int argc, char *argv[]) {
    char input[DIMMAX];

    cout << "Introdurre stringa da invertire: ";
    cin >> input;

    // Assumiamo che sia sempre strlen(input) < DIMMAX reverse_array(input, strlen(input));
    cout << "Array invertito: " << input << endl;
    
    return 0;
}

// Definire qui sotto la funzione reverse_array