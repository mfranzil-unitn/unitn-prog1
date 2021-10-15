#include <cmath>
#include <iostream>

using namespace std;

long double branch1(long double);
long double branch2(long double);
int main() {
    cout << "\t\t| -x^3\tper x<=0\nf =\t\t| e^x-1\tper x>0\n\n";

    int val;

    cout << "Inserisci il valore di partenza: ";

    cin >> val;

    cout << "\n\nValori:\nx\t\tf(x)\n";

    for (int i = 0; i < 10; i++, val++) {
        if (val <= 0) {
            cout << val << "\t\t" << branch1(val) << endl;
        } else {
            cout << val << "\t\t" << branch2(val) << endl;
        }
    }
    return 0;
}

long double branch1(long double value) {
    value = pow(value, 3);
    value = value * (-1);
    return value;
}

long double branch2(long double value) {
    //const long double nepero = 2.71828;
    value--;
    value = exp(value);
    return value;
}
