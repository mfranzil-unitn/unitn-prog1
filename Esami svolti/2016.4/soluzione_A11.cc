#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const int MAX_CHAR = 255 + 1;

// Funzioni di utilita'
bool appartiene(char* s, char* lista[], int quanti);
bool appartiene(char* s, char* lista[], int inf, int sup);

int main(int argc,char* argv[]){
  fstream file_a, file_b, file_output;
  int maxnum;
  char parola[MAX_CHAR];
  
  // Controllo parametri in ingresso
  if (argc != 4) {
    cout << "Sintassi: ./a.out <file_a> <file_b> <risultato>\n";
    exit(-1);
  }

  // Apro il primo file
  file_a.open(argv[1],ios::in);
  // Numero righe del file
  file_a >> maxnum;
  // Allocazione dinamica
  char** parole = new char* [maxnum];
  int i = 0;
  // Prima parola del file
  file_a >> parola;
  while(!file_a.eof()
        // Questo controllo non e' in realta' necessario
        && i < maxnum) {
    // Allocazione dinamica
    parole[i] = new char[strlen(parola) + 1];
    // Non e' necessario utilizzare strncpy,
    // perche' "parola" e', per costruzione,
    // una stringa "ben formata"
    strcpy(parole[i], parola);
    // Continua lettura file
    file_a >> parola;
    // Incremento contatore parole lette
    i++;
  }
  // A questo punto, file_a non serve piu'
  file_a.close();

  // Apro il secondo file
  file_b.open(argv[2],ios::in);
  // Apro file di output
  file_output.open(argv[3],ios::out);
  // Leggo e scarto il numero righe del secondo file
  // perche' non lo utilizzo
  file_b >> i;
  // Prima parola del file
  file_b >> parola;
  while(!file_b.eof()) { 
    // Se parola e' presente anche in file_a,
    // allora la salva nel file di output
    if(appartiene(parola, parole, maxnum)) {
      file_output << parola << endl;
    }
    // Continua lettura file
    file_b >> parola;
  }
  // Chiusura stream secondo file
  file_b.close();
  // Chiusura stream file di output
  file_output.close();

  return(0);
}

bool appartiene(char* s, char* lista[], int quanti) {
  bool trovato = false;
  // Ricerca lineare (funziona, ma vale
  // un punto in meno)
  /*
  int i = 0;
  while(!trovato && i < quanti) {
    if(strcmp(s, lista[i]) == 0) {
      trovato = true;
    }
    i++;
  }
  */
  // Ricerca per bisezione (ricorsiva)
  trovato = appartiene(s, lista, 0, quanti - 1);
  // Ritorno il risultato
  return trovato;
}

bool appartiene(char* s, char* lista[], int inf, int sup) {
  bool ris = false;
  if(inf <= sup) {
    int mid = (inf + sup) / 2;
    int cmp = strcmp(s, lista[mid]);
    if(cmp == 0) {
      ris = true;
    } else if(cmp < 0) {
      ris = appartiene(s, lista, inf, mid - 1);
    } else {
      ris = appartiene(s, lista, mid + 1, sup);
    }
  }
  return ris;
}
