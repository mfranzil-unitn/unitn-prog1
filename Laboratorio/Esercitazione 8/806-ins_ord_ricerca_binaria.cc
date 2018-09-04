/*
  Dichiarare e definire la funzione 'inserisci'
  che riceve in ingresso un array di caratteri ordinato
  alfabeticamente in modo crescente, la sua dimensione attuale
  e un carattere da inserire nella posizione corretta; la
  ricerca della posizione in cui inserire il carattere
  va effettuata con ricerca binaria

  Tenere conto della dimensione massima dell'array
  in fase di inserimento.
*/

#include <iostream>

using namespace std;

const int SIZE = 10;

void stampaArray(const char array[], int dim);
bool inserisci(char array[], int& n, char elemento); 
int trovaPosizionePer(const char array[], char a, int inf, int sup);

int main() {
  char array[SIZE] = {};
  int dim = 0;
  char comando;
  do {
    stampaArray(array, dim);
    cout << "Introdurre comando: ";
    cin >> comando;
    switch(comando) {
      case 'i': case 'I':
        char elemento;
        cout << "Introdurre elemento: ";
        cin >> elemento;
        if(!inserisci(array, dim, elemento)) {
          cout << "Errore, non c'e' piu' spazio nell'array!" << endl;
        }
        break;
      case 'e': case 'E': break;
      default: cout << "Comando sbagliato, comandi validi: i, e." << endl;
    }
  } while(!(comando == 'e' || comando == 'E'));
}

void stampaArray(const char array[], int dim) {
  for(int i = 0; i < dim; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

// Si poteva anche creare un wrapper per
// la funzione ricorsiva
int trovaPosizionePer(const char array[], char a, int inf, int sup) {
  // Ipotesi iniziale: l'elemento va inserito in fondo
  // all'array
  int pos = sup; 
  // Passo base
  if(inf < sup) {
    // Il "centro" dell'array
    int pivot = (inf + sup) / 2;
    if(array[pivot] < a) {
      // Cerco a destra
      pos = trovaPosizionePer(array, a, pivot + 1, sup);
    } else {
      // Cerco a sinistra
      pos = trovaPosizionePer(array, a, inf, pivot);
    }
  }
  return pos;
}

bool inserisci(char array[], int& n, char elemento) {
  bool ris = false;
  // Controllo se c'e' spazio disponibile
  if(n < SIZE) {
    // Cerca la posizione dove inserire elemento
    int pos = trovaPosizionePer(array, elemento, 0, n);
    // Aggiunge spazio per un nuovo elemento dell'array
    n++;
    // Sposta tutti gli elementi di un posto a destra
    for(int j = n; j > pos; j--) {
      array[j] = array[j - 1];
    }
    // Inserisce l'elemento
    array[pos] = elemento;
    ris = true;
  }
  return ris;
}
