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

/*
 * Inserire qui la definizione di "calcolaGuadagno", "altezzaPiramide",
 * "deallocaPiramide" e di eventuali altre funzioni ausiliarie.
 */