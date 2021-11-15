#include <cstdlib>
#include <iostream>

using namespace std;

int funzione(int n) {
    if (n < 10) {
        return 0; // caso base
    } else {
        int c1 = n % 10;  // prima cifra piu' a destra
        int n1 = n / 10;  // parte che rimane
        int c2 = n1 % 10; // seconda cifra piu' a destra
        return ((c1 == c2) ? 1 : 0) + funzione(n1);
    }
}

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
