/*
  Dichiarare e definire la funzione 'inserisci'
  che riceve in ingresso un array di caratteri ordinato
  alfabeticamente in modo crescente, la sua dimensione attuale
  e un carattere da inserire nella posizione corretta.

  Tenere conto della dimensione massima dell'array
  in fase di inserimento.
*/

#include <iostream>

using namespace std;

const int SIZE = 10;

void stampaArray(const char array[], int dim);
bool inserisci(char array[], int& n, char elemento); 

int main() {
  char array[SIZE];
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

bool inserisci(char array[], int& n, char elemento) {
  bool ris = false;
  // Controllo se c'e' spazio disponibile
  if(n < SIZE) {
    int i;
    // Cerca la posizione dove inserire elemento
    for(i = 0; i < n && array[i] < elemento; i++);
    // Attenzione all'ordine delle operazioni!
    n++;
    for(int j = n; j > i; j--) {
      array[j] = array[j - 1];
    }
    array[i] = elemento;
    ris = true;
  }
  return ris;
}
