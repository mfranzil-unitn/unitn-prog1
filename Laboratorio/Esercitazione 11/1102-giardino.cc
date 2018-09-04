#include <iostream>
#include <cstdlib>
#include "02-giardino.h"

using namespace std;

Albero*** preparaGiardino(int a, int b) {
  // Alloca array di array (matrice)
  Albero*** g = new Albero** [a];
  for(int i = 0; i < a; i++) {
    // Alloca riga di "g"
    g[i] = new Albero* [b];
    for(int j = 0; j < b; j++) {
      // Innizializza puntatore ad "Albero"
      g[i][j] = NULL;
    }
  }
  return g;
}

void riempiGiardino(Albero*** g, int a, int b, int n[NUMERO_SPECIE]) {
  srand(time(NULL));
  int posX, posY;
  for(int i = 0; i < NUMERO_SPECIE; i++) {
    for(int j = 0; j < n[i]; j++) {
      // Continua a generare numeri casuali,
      // finche' non trova una posizione "libera"
      do {
        posX = rand() % a;
        posY = rand() % b;
      } while(g[posX][posY] != NULL);
      // In alternativa: g[posX][posY] = new Albero; 
      // g[posX][posY]->nome_specie = ...
      Albero* nuovoAlbero = new Albero;
      nuovoAlbero->nome_specie = (Specie)i; // Equivalenza interi - enumerati
      nuovoAlbero->numero_identificativo = j + 1; 
      g[posX][posY] = nuovoAlbero; 
    }
  }
}

void stampaGiardino(const Albero* const * const * g, int a, int b) {
  for(int i = 0; i < a; i++) {
    for(int j = 0; j < b; j++) {
      cout << " ";
      // In alternativa: cout << (g[i][j] != NULL && 
      // g[i][j]->nome_specie < 5 && g[i][j]->nome_specie >= 0)
      // ? iniziali_nomi_specie[g[i][j]->nome_specie] : "*";
      if(g[i][j] == NULL) {
        // Spazio vuoto
        cout << "*";
      } else {
        // Piu' leggibile (ancora, equivalenza interi enumerati);
        // era possibile controllare se 0 <= g[i][j] < 5
        cout << iniziali_nomi_specie[g[i][j]->nome_specie];
      }
    }
    cout << endl;
  }
}
