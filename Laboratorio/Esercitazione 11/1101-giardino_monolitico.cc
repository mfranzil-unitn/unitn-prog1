#include <iostream>
#include <cstdlib>

using namespace std;

// Numero specie arboree presenti
const int NUMERO_SPECIE = 5;
// Elenco specie arboree
enum Specie {FAGGIO, CILIEGIO, ABETE, NOCE, BETULLA};
const char iniziali_nomi_specie[NUMERO_SPECIE] = {'F', 'C', 'A', 'N', 'B'};

struct Albero {
  Specie nome_specie;
  int numero_identificativo;
};

Albero*** preparaGiardino(int a, int b);
void riempiGiardino(Albero*** g, int a, int b, int n[NUMERO_SPECIE]);
// Una spiegazione sul perche' di questa strana sintassi:
// http://stackoverflow.com/questions/2220916/
void stampaGiardino(const Albero* const * const * g, int a, int b);

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
