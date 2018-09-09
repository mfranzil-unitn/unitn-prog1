//
// Stampare a video la tabella di verita'
// dell'operatore AND (a && b) SENZA USARE CICLI
//

#include <iostream>
using namespace std;

int main() {
    bool risposta;

    risposta = 0 && 0;
    cout << "0 AND 0 = " << risposta << endl;
    risposta = (0 && 1);
    cout << "0 AND 1 = " << risposta << endl;
    risposta = (1 && 0);
    cout << "1 AND 0 = " << risposta << endl;
    risposta = (1 && 1);
    cout << "1 AND 1 = " << risposta << endl;

    return (0);
}
