/*
  Modificare il programma precedente ("01-caesar.cc")
  in modo che la stringa da codificare venga letta
  tramite la funzione "getline" di cin.
  Attenzione alla dimensione del buffer in ingresso! 
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
  cin.getline(sorgente, LUNGHEZZA);
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
