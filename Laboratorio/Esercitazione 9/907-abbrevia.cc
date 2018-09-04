/*
  Completare il programma aggiungendo il codice che legga
  un file di testo composto da piu' righe contenenti ciascuna
  un certo insieme di parole; ogni parola in ingresso va salvata
  nel file in uscita, secondo la seguente regola di abbreviazione:
  - se la lunghezza e' inferiore o uguale a LUNGHEZZA_PAROLA,
    viene trascritta inalterata;
  - altrimenti vengono trascritti i primi "LUNGHEZZA_PAROLA" caratteri
    seguiti dal punto (".").
  Le parola sono delimitate dai delimitatori "DELIMITATORI" (che e'
  un array di caratteri e NON una stringa) 
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

using namespace std;

int min(int a, int b);

const int LUNGHEZZA_RIGA = 256;
const int LUNGHEZZA_PAROLA = 4;
const char DELIMITATORI[] = " ,.;:-";

int main (int argc, char * argv[]) 
{
  fstream myin, myout;
  char c;
  
  if (argc < 3) {
    cerr << "Sintassi: ./a.out <in> <out>.\n";
    exit(EXIT_FAILURE);
  }
  
  myin.open(argv[1], ios::in);
  if (myin.fail()) {
     cerr << "Il file " << argv[1] << " non esiste\n";
     exit(EXIT_FAILURE);
  }

  myout.open(argv[2], ios::out);

  char riga[LUNGHEZZA_RIGA];
  char parola[LUNGHEZZA_PAROLA + 2];
  while (myin.getline(riga, LUNGHEZZA_RIGA)) {
    int pos = 0, lun = strlen(riga);
    for(int i = 0; i < lun; i++) {
      if(strchr(DELIMITATORI, riga[i]) > 0) {
        int j;
        for(j = 0; j < min(LUNGHEZZA_PAROLA, i - pos); j++) {
          parola[j] = riga[pos + j];
        }
        parola[j] = '\0';
        if(i - pos > LUNGHEZZA_PAROLA) {
          strcat(parola, ".");
        }
        myout << parola << riga[i];
        pos = i + 1;
      }
    }
    // Ultima parola della riga
    if(pos < lun) {
      int j;
      for(j = 0; j < min(LUNGHEZZA_PAROLA, lun - pos); j++) {
        parola[j] = riga[pos + j];
      }
      parola[j] = '\0';
      if(lun - pos > LUNGHEZZA_PAROLA) {
        strcat(parola, ".");
      }
      myout << parola;
    }
    myout << endl;
  }

  myin.close();
  myout.close();

  return 0;
}

int min(int a, int b) {
  return a < b ? a : b;
}
