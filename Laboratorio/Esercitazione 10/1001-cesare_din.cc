/*
  Reimplementazione del programma sulla codifica
  di una stringa secondo la codifica di Cesare,
  sfruttando l'allocazione dinamica.
*/

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

const int LUNGHEZZA = 256;

char* codifica(const char t[]);
char caesar(char c);

int main(int argc, char* argv[]) {
  // "sorgente" e' un array statico mentre
  // "destinazione" e' un puntatore a char, che
  // puo' contenere l'indirizzo (puntatore al primo elemento)
  // di un array dinamico
  char c, sorgente[LUNGHEZZA], *destinazione;
  cout << "Introdurre stringa da codificare: ";
  cin.getline(sorgente, LUNGHEZZA);
  // "destinazione" viene allocato e valorizzato
  // all'interno della funzione "codifica"
  destinazione = codifica(sorgente);
  cout << "Stringa codificata: " << destinazione << endl;
  // ora destinazione non serve piu'
  delete [] destinazione;
  return 0;
}

char* codifica(const char t[]) {
  int i, lun = strlen(t);
  char* s = new char[lun + 1];
  for(i = 0; i < lun; i++) {
    s[i] = caesar(t[i]);
  }
  s[i] = '\0';
  return s;
}

char caesar(char c) {
  /* 
     Alternativamente (versione compatta):
     return (isalpha(c) ? (islower(c) ?
                             (c - 'a' + 3) % 26 + 'a' :
                             (c - 'A' + 3) % 26 + 'A'
                           ) : c;
  */
  char r = c;
  if(isalpha(c)) {
    if(islower(c)) {
      r = (c - 'a' + 3) % 26 + 'a';
    } else {
      r = (c - 'A' + 3) % 26 + 'A';
    }
  }
    return r;
}
