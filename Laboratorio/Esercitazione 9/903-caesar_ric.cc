/*
  Modificare il programma precedente ("01-caesar.cc")
  reimplementando la funzione codifica in modo ricorsivo.
*/

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

const int LUNGHEZZA = 256;

void codifica(char t[], const char s[]);
char caesar(char c);

int main(int argc, char* argv[]) {
  char sorgente[LUNGHEZZA], destinazione[LUNGHEZZA] = "";
  if(argc != 2) {
    cerr << "Introdurre almeno un parametro." << endl;
    exit(EXIT_FAILURE);
  }
  // L'utilizzo di strcpy e' potenzialmente insicuro;
  // strncpy "tronca" la stringa alla dimensione
  // fissata prima di copiarla nella destinazione
  strncpy(sorgente, argv[1], LUNGHEZZA - 1);
  codifica(destinazione, sorgente);
  cout << "Stringa codificata: " << destinazione << endl;
  return 0;
}

void codifica(char t[], const char s[]) {
  // Qui utilizziamo strcat anziche' strncat perche'
  // la dimensione delle stringhe e' nota a priori
  // (grazie a strncpy): tuttavia, utilizzare strncat
  // non costituirebbe certamente un errore
  if(strlen(s) == 0) {
    strcat(t, "");
  } else {
    char tmp[2] = {caesar(s[0]), '\0'};
    strcat(t, tmp);
    // L'array t come puntatore al suo primo elemento:
    // t + 1 corrisponde allo stesso array, a partire
    // dal secondo elemento
    codifica(t, s + 1);
  }
}

char caesar(char c) {
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
