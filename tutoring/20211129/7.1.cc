#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

// Anche se c'è questa costante che limita la dimensione degli array,
// è fatta solo per evitare di far girare i vostri programmi per decine
// di minuti. Non programmate con dimensioni fisse, per favore.
const int UPPER_BOUND_DIM = 10;
const int UPPER_BOUND_VAL = 50;

struct nodo {
    float valore;
    nodo *pred;
    nodo *succ;
};

typedef nodo *lista;

float randVal();

lista generaLista();
void stampaLista(lista nodoCorrente);
nodo *creaNodo(float cartaDaInserire);

// ------------------------

lista unisciListe(lista l1, lista l2);
float scorriLista(lista l);
void deallocaLista(lista nn);

// IMPORTANTE. Non modificare il main.
int main() {
    srand(time(NULL));

    lista lista1 = generaLista();
    lista lista2 = generaLista();

    cout << "Lista 1: ";
    stampaLista(lista1);
    cout << endl;

    cout << "Lista 2: ";
    stampaLista(lista2);
    cout << endl;

    lista listaUnita = unisciListe(lista1, lista2);

    cout << "Liste unite: ";
    stampaLista(listaUnita);
    cout << endl;

    float somma = scorriLista(listaUnita);

    cout << "Liste filtrate: ";
    stampaLista(listaUnita);
    cout << endl;
    cout << "Somma degli elementi > 0: " << somma << endl;

    // E' compito della funzione scorriLista liberare
    // la memoria dei nodi intermedi! Non decommentare
    // queste righe, altrimenti verrà rseba a prendervi con l'ascia.
    deallocaLista(listaUnita);

    return 0;
}

// IMPORTANTE. Non modificare questa funzione.
nodo *creaNodo(float val) {
    nodo *n = new nodo;
    n->valore = val;
    n->pred = NULL;
    n->succ = NULL;
    return n;
}

// IMPORTANTE. Non modificare questa funzione.
float randVal() {
    float valore = (float)rand() / (float)(RAND_MAX / UPPER_BOUND_VAL);
    if (rand() % 2 == 0) {
        valore *= -1;
    }

    return valore;
}

// IMPORTANTE. Non modificare questa funzione.
nodo *generaLista() {
    int size = rand() % UPPER_BOUND_DIM;

    nodo *nodoIniziale = creaNodo(randVal());
    nodo *nodoPredecente = nodoIniziale;
    nodo *nodoCorrente = NULL;

    for (int i = 1; i < size; i++) {
        nodoCorrente = creaNodo(randVal());
        nodoPredecente->succ = nodoCorrente;
        nodoCorrente->pred = nodoPredecente;
        nodoPredecente = nodoCorrente;
    }

    return nodoIniziale;
}

// IMPORTANTE. Non modificare questa funzione.
void stampaLista(nodo *nn) {
    while (nn != NULL) {
        cout << nn->valore << " ";
        nn = nn->succ;
    }
    cout << endl;
}

// ------------------------

lista unisciListe(lista l1, lista l2) {
    // Caso in cui ci sono liste vuote
    lista retval;
    if (l1 == NULL && l2 == NULL) {
        retval = NULL;
    } else if (l1 == NULL) {
        retval = l2;
    } else if (l2 == NULL) {
        retval = l1;
    } else {
        // Possiamo procedere? Forse no.
        if (l1->pred != NULL || l2->pred != NULL) {
            retval = NULL;
        } else {
            // scorro tutta la prima lista
            nodo *nodoCorrente = l1;
            while (nodoCorrente->succ != NULL) {
                nodoCorrente = nodoCorrente->succ;
            }

            // la unisco alla seconda
            nodoCorrente->succ = l2;
            l2->pred = nodoCorrente;

            retval = l1;
        }
    }

    return retval;
}

float scorriLista(lista l) {
    float retval = 0;
    nodo *nodoCorrente = l;

    // Se il primo è positivo lo devo togliere
    if (nodoCorrente->valore > 0) {
        nodo *nodoDaCancellare = nodoCorrente;

        retval += nodoDaCancellare->valore;
        nodo *nodoSuccessivo = nodoDaCancellare->succ;
        nodoCorrente->pred = NULL;
        nodoCorrente = nodoSuccessivo;

        delete nodoDaCancellare;
    }

    // Gli altri
    while (nodoCorrente->succ != NULL) {
        if (nodoCorrente->valore > 0) {
            // rimuovi nodo
            nodo *nodoDaCancellare = nodoCorrente;

            retval += nodoDaCancellare->valore;

            nodo *nodoPrecedente = nodoDaCancellare->pred;
            nodo *nodoSuccessivo = nodoDaCancellare->succ;

            nodoPrecedente->succ = nodoSuccessivo;
            nodoSuccessivo->pred = nodoPrecedente;

            nodoCorrente = nodoSuccessivo;

            // dealloca nodo
            delete nodoDaCancellare;
        } else {
            nodoCorrente = nodoCorrente->succ;
        }
    }
    return retval;
}

void deallocaLista(lista nn) {
    while (nn != NULL) {
        nodo *temp = nn;
        nn = nn->succ;
        delete temp;
    }
}