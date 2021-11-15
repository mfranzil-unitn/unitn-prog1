
#include <cstdlib>
#include <iostream>

using namespace std;

// Scrivere qui sotto la dichiarazione della funzione "funzione"

// Scrivere qui sopra la dichiarazione della funzione "funzione"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <positivenum> " << std::endl;
        exit(1);
    }
    int n = atoi(argv[1]);
    std::cout << "The read string is: " << argv[1] << std::endl;
    std::cout << "The converted value is: " << n << std::endl;
    std::cout << "function(" << n << ") = " << funzione(n) << std::endl;
}


// Scrivere qui sopra la definizione della funzione "funzione"

// Scrivere qui sotto la definizione della funzione "funzione"