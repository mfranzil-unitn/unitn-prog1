/*
  Scrivere un programma che riceva in ingresso uno o piu' parametri,
  di cui il primo sia un numero intero. Il programma classifichera'
  tutti i parametri dopo il primo in due gruppi, in base alla loro
  lunghezza: "piu' lunghi" o "piu' corti o uguali" rispetto al numero
  di cui sopra.
  Il programma stampa i due gruppi di parametri separatamente.
*/

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
  if(argc < 3) {
    cerr << "Troppo pochi argomenti.\n";
    return -1;
  }
  int n_inf = 0, n_sup = 0;
  char **inferiori, **superiori;
  int soglia = atoi(argv[1]);
  // Doppio passaggio
  for(int i = 2; i < argc; i++) {
    if(strlen(argv[i]) <= soglia) {
      n_inf++;
    } else {
      n_sup++;
    }
  }
  inferiori = new char* [n_inf];
  superiori = new char* [n_sup];
  int i_inf = 0, i_sup = 0;
  for(int i = 2; i < argc; i++) {
    if(strlen(argv[i]) <= soglia) {
      // Oppure: inferiori[i_inf++] = argv[i];
      // Qual'e' la differenza?
      inferiori[i_inf] = new char[strlen(argv[i]) + 1];
      strcpy(inferiori[i_inf], argv[i]);
      i_inf++;
    } else {
      // Oppure: superiori[i_sup++] = argv[i];
      // Qual'e' la differenza?
      superiori[i_sup] = new char[strlen(argv[i]) + 1];
      strcpy(superiori[i_sup], argv[i]);
      i_sup++;
    }
  }
  // Stampa
  cout << "Inferiori: ";
  for(int i = 0; i < n_inf; i++) {
    cout << inferiori[i] << " ";
  }
  cout << endl;
  cout << "Superiori: ";
  for(int i = 0; i < n_sup; i++) {
    cout << superiori[i] << " ";
  }
  cout << endl;
  // Deallocazione
  for(int i = 0; i < n_inf; i++) {
    delete [] inferiori[i];
  }
  delete [] inferiori;
  for(int i = 0; i < n_sup; i++) {
    delete [] superiori[i];
  }
  delete [] superiori; 
  return 0;
}
