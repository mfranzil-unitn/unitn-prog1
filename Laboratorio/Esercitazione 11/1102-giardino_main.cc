#include <iostream>
#include <cstdlib>
#include "02-giardino.h"

using namespace std;

int main(int argc, char* argv[]) {
  Albero*** giardino;
  // Indica quanti esemplari per ogni specie (3 faggi, ...)
  int quanti[NUMERO_SPECIE] = {3, 1, 2, 1, 3};
  // La scelta del numero "9" e' assolutamente arbitraria,
  // dava un risultato gradevole a video.
  int dimX, dimY;
  // Controllo parametri in ingresso
  if(argc != 3) {
    cout << "Sintassi: ./a.out <dimX> <dimY>" << endl;
    exit(-1);
  }
  dimX = atoi(argv[1]);
  dimY = atoi(argv[2]);
  if(dimX < 9 || dimY < 9) {
    cout << "Sia dimX che dimY devono essere almeno 9." << endl;
    exit(-2);
  }
  // Alloca la struttura dati
  giardino = preparaGiardino(dimX, dimY);
  // Popola la struttura dati
  riempiGiardino(giardino, dimX, dimY, quanti);
  // La stampa
  stampaGiardino(giardino, dimX, dimY);
  // Deallocazione risorse dinamiche, fatta nella main
  for(int i = 0; i < dimX; i++) {
    for(int j = 0; j < dimY; j++) {
      if(giardino[i][j] != NULL) {
        // Dealloca un "albero"
        delete giardino[i][j];
      }
    }
    // Dealloca una riga di "giardino"
    delete[] giardino[i];
  }
  // Dealloca array di array "giardino"
  delete[] giardino;
}
