/*
  Dato un certo insieme di parametri di tipo stringa in ingresso,
  stampare l'istogramma relativo alla frequenza
  della lunghezza dei parametri stessi.

  Esempio: ./a.out a b c def ghij klmnopq
  
  Stampa:
  1: ###
  2:
  3: #
  4: #
  5:
  6: #
*/

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
  if(argc < 2) {
    cerr << "Troppo pochi argomenti.\n";
    return -1;
  }
  int max_occorrenze = 0;
  // Doppio passaggio: prima cerco la parola piu' lunga
  // => massima dimensione array frequenze
  for(int i = 1; i < argc; i++) {
    int lun = strlen(argv[i]);
    if(lun > max_occorrenze) {
      max_occorrenze = lun;
    }
  }
  // Alloco e inizializzo tutti gli elementi dell'array
  // a zero
  int* frequenze = new int[max_occorrenze] {0};
  // Ora conto quante parole hanno la stessa lunghezza
  for(int i = 1; i < argc; i++) {
    frequenze[strlen(argv[i]) - 1]++;
  }
  // Infine stampo l'istogramma
  for(int i = 0; i < max_occorrenze; i++) {
    cout << "Argomenti di lunghezza [" << i + 1 << "]: ";
    for(int j = 0; j < frequenze[i]; j++) {
      cout << "#";
    }
    cout << endl; 
  }
  // Dealloco l'array frequenze
  delete [] frequenze;
  return 0;
}
