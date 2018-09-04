/*
  Definire le funzioni "preparaMazzo" e "mescolaMazzo",
  che popolano rispettivamente un array di carte con "dim"
  carte ordinate e che mettono queste carte in una coda
  scegliendole in modo casuale tra quelle del primo mazzo.
  La coda va implementata alterando i file "struct_queue.h"
  e "struct_queue.cc", che diventeranno "carte.h" e "carte.cc".
  Nota: non e' necessario implementare la funzione "print"
  della coda; e' invece necessario implementare la funzione
  "stampa" che da' una rappresentazione leggibile di una carta
  da gioco.
*/

#include <iostream>
#include <cstdlib>
#include "02-carte.h"

using namespace std;

extern const int dim;

const char* nomi_semi[4] = {"cuori", "fiori", "picche", "quadri"};

void preparaMazzo(Carta m[]);
void mescolaMazzo(queue& c, Carta m[]);
void stampa(Carta c);

int main(int argc, char* argv[]) {
  Carta mazzo_nuovo[dim];
  queue mazzo;
  int n;
  cout << "Quante carte? ";
  cin >> n;
  // Prepara un mazzo ordinato
  preparaMazzo(mazzo_nuovo);
  // Mette le carte nella coda,
  // secondo un ordine casuale
  mescolaMazzo(mazzo, mazzo_nuovo);
  // Estrae n carte
  for(int i = 0; i < n; i++) {
    Carta c;
    if(OK == first(c, mazzo)) {
      stampa(c);
      dequeue(mazzo);
    }
  }
}

void preparaMazzo(Carta m[]) {
  int j = 0;
  for(int s = CUORI; s <= QUADRI; s++) {
    for(int v = 0; v < 13; v++) {
      m[j].seme = (SEMI)s;
      m[j].valore = v;
      j++;
    }
  }
}

void mescolaMazzo(queue& c, Carta m[]) {
  init(c);
  srand(time(NULL));
  int carte_rimaste = dim;
  for(int j = 0; j < dim; j++) {
    // Sceglie una carta a caso
    int n_carta = rand() % carte_rimaste;
    // Mette la carta nella coda
    enqueue(m[n_carta], c);
    // "Compatta" il mazzo di carte originario
    for(int i = n_carta; i < carte_rimaste; i++) {
      m[i] = m[i + 1];
    }
    // Accorcia il mazzo originario
    carte_rimaste--;
  }
}

void stampa(Carta c) {
  if(c.valore == 1) {
    cout << "Asso di ";
  } else if(c.valore == 11) {
    cout << "Jack di ";
  } else if(c.valore == 12) {
    cout << "Regina di ";
  } else if(c.valore == 13) {
    cout << "Re di ";
  } else if(c.valore > 1 && c.valore < 11) {
    cout << c.valore << " di ";
  }
  cout << nomi_semi[c.seme] << endl;
}
