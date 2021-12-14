#include <iostream>
using namespace std;

struct persona {
   int codiceInvito;
   persona *primo;
   persona *secondo;
   persona *terzo;
};

typedef persona *piramide;

piramide generaPiramide(int numeroDiPersone = 20);

int calcolaGuadagno(piramide vertice, int quota, float commissioni = 0.2);

int altezzaPiramide(piramide vertice);

void deallocaPiramide(piramide vertice);

int main(int argc, char *argv[]) {

    piramide p = generaPiramide();

    cout << "Fuffox potrà guadagnare: " << calcolaGuadagno(p, 100) << "$" << endl;
    cout << "La piramide è alta: " << altezzaPiramide(p) << endl;

    deallocaPiramide(p);

    return 0;
}


int altezzaPiramide(piramide p){
    int retval = 0;
    if (p != nullptr){
        int a1 = altezzaPiramide(p->primo);
        int a2 = altezzaPiramide(p->secondo);
        int a3 = altezzaPiramide(p->terzo);
        retval = max(a1, a2);
        retval = max(retval, a3);
    }
    return 1 + retval;
}



void deallocaPiramide(piramide vertice){
    if (vertice != nullptr){
        deallocaPiramide(vertice->primo);
        deallocaPiramide(vertice->secondo);
        deallocaPiramide(vertice->terzo);
    }
    delete vertice;
}


piramide generaPiramide(int numeroDiPersone) {

    srand(time(NULL));
    persona *persone[numeroDiPersone];

    cout << "La piramide è composta da:";

    for (int i = 0; i < numeroDiPersone; i++) {
        persone[i] = new persona;
        persone[i]->codiceInvito = i;
        persone[i]->primo = NULL;
        persone[i]->secondo = NULL;
        persone[i]->terzo = NULL;
        cout << " " << persone[i]->codiceInvito;
    }
    cout << endl;

    for (int i = 0; (3 * i + 1) < numeroDiPersone; i++) {
        persone[i]->primo = persone[3 * i + 1];
        if ((3 * i + 2) < numeroDiPersone) {
            persone[i]->secondo = persone[(3 * i + 2)];
            if ((3 * i + 3) < numeroDiPersone) {
                persone[i]->terzo = persone[(3 * i + 3)];
            }
        }
    }

    return persone[0];
}

int calcolaGuadagno(piramide vertice, int quota, float commissioni){
    int retval = 0;
    int quote_invito = 0;
    if (vertice != nullptr){
        int c1 = calcolaGuadagno(vertice->primo, quota);
        int c2 = calcolaGuadagno(vertice->secondo, quota);
        int c3 = calcolaGuadagno(vertice->terzo, quota);
        if (c1 == 0)
            quote_invito++;
        if (c2 == 0)
            quote_invito++;
        if (c3 == 0)
            quote_invito++;
        retval = quota + (c1 + c2 + c3 - commissioni*quote_invito);
    }
    return  retval;
}
