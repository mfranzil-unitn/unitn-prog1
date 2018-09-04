using namespace std;
#include <iostream>
#include "stack.h"

int main () 
{
    char res;
    double val;
    stack s;
    
    int maxdim = -1;
    while (maxdim <= 0) {
        cout << "Inserire la dimensione massima della pila: ";
        cin >> maxdim;
    }
  
    init(s, maxdim);
    do {
        cout << "\nOperazioni possibili:\n"
             << " Push (u)\n"
             << " Pop (o)\n"
             << " Top (t)\n"
             << " Print (p)\n"
             << " Quit (q)\n";
        cin >> res;
        switch (res) {
        case 'u':
            cout << "Val? : ";
            cin >> val;
            if (!push(s, val)) {
                cout << "Pila piena!\n";
            }
            break;
        case 'o':
            if (!pop(s)) {
                cout << "Pila vuota!\n";
            }
            break;
        case 't':
            if (!top(s, val)) {
                cout << "Pila vuota!\n";
            } else {
                cout << "Top = " << val << endl;
            }
            break;
        case 'p':
            print(s);
            break;
        case 'q':
            break;
        default:
            cout << "Opzione errata\n";
        }
    } while (res != 'q');

    deinit(s);
    
    return 0;
}
