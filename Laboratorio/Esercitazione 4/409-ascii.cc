//
// Stampare a video la tabella della codifica ASCII
//

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 128; i++) {
        cout << i << " => " << (char)i << endl;
    }

    return (0);
}
