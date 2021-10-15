#include <cmath>
#include <iostream>

using namespace std;

double pow2(double);

int main() {
    int cycles;
    long double total = 0;
    cout << "Insert number of cycles: ";
    cin >> cycles;
    for (int i = 0; i < cycles; i++) {
        total += (1.0 / pow2(i));
    }
    cout << "The result is " << total << endl;
    return 0;
}

double pow2(double a) {
    double result = 1;
    for (int i = 1; i <= a; i++) {
        result *= 2;
    }
    return result;
}
