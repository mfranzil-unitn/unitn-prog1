/*
  Riceve da riga comando un parametro stringa e
  lo cripta secondo la codifica di Cesare
  (sostituisce ad ogni lettera, maiuscola o minuscola,
  la corrispondente lettera tre posizioni successiva
  nell'alfabeto, cosi':
  'a' -> 'd', ..., 'z' -> 'c'
  'A' -> 'D', ..., 'Z' -> 'C'
  ). Tutti gli altri caratteri rimangono inalterati.
*/

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

const int LUNGHEZZA = 256;

void codifica(char t[], const char s[]);
char caesar(char c);

int main(int argc, char* argv[]) {
  char sorgente[LUNGHEZZA], destinazione[LUNGHEZZA];
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
  int i;
  for(i = 0; i < strlen(s); i++) {
    t[i] = caesar(s[i]);
  }
  t[i] = '\0';
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
