/*
  Completare il programma aggiungendo il codice che legga
  un file di testo composto da piu' righe di numeri interi separati
  dal carattere DELIMITATORE, e che usi questi numeri per popolare una matrice
  di dimensione DIMENSIONE x DIMENSIONE.
  E' ammesso l'utilizzo della funzione "atoi" che riceve in ingresso una stringa
  rappresentante un intero e ritorna il valore dell'intero in questione.

  Dati di esempio:

  10,15,12,13,999
  11,23,45,6,88
  1000,3,4,5,6
  0,0
  1,2,3,4,5
*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const int LUNGHEZZA_RIGA = 256;
const int LUNGHEZZA_PAROLA = 10;
const char DELIMITATORE = ',';
const int DIMENSIONE = 4;

void stampaMatrice(int matrice[DIMENSIONE][DIMENSIONE]);

int main (int argc, char * argv[]) 
{
  int m[DIMENSIONE][DIMENSIONE] = {};
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

  char riga[LUNGHEZZA_RIGA];
  char parola[LUNGHEZZA_PAROLA + 1];
  int num_riga = 0;
  while (myin.getline(riga, LUNGHEZZA_RIGA) && num_riga < DIMENSIONE) {
    int pos = 0, lun = strlen(riga);
    int num_colonna = 0;
    for(int i = 0; i < lun && num_colonna < DIMENSIONE; i++) {
      if(riga[i] == DELIMITATORE) {
        int j;
        for(j = 0; j < min(LUNGHEZZA_PAROLA, i - pos); j++) {
          parola[j] = riga[pos + j];
        }
        parola[j] = '\0';
        m[num_riga][num_colonna] = atoi(parola);
        pos = i + 1;
        num_colonna++;
      }
    }
    // L'eventuale ultima "parola" della riga
    if(num_colonna < DIMENSIONE && pos < lun) {
      int j;
      for(j = 0; j < min(LUNGHEZZA_PAROLA, lun - pos); j++) {
        parola[j] = riga[pos + j];
      }
      parola[j] = '\0';
      m[num_riga][num_colonna] = atoi(parola);
      // Non serve aggiornare "pos" o "num_colonna"
    }
    num_riga++;
  }

  myin.close();

  stampaMatrice(m);

  return 0;
}

void stampaMatrice(int matrice[DIMENSIONE][DIMENSIONE]) {
  for(int i = 0; i < DIMENSIONE; i++) {
    for(int j = 0; j < DIMENSIONE; j++) {
      cout << matrice[i][j] << '\t';
    }
    cout << '\n';
  }
}
