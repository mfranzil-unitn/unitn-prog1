using namespace std;
#include <iostream>

#include "persona.h"
#include "tree.h"
#include "doubletree.h"

int main () 
{
  
  persona * p;
  doubletree agenda;
  char cognome[MAX_DIM];
  char nome[MAX_DIM];
  char indirizzo[MAX_DIM];
  char res;
  tree  tmp;
  
  init(agenda);
    do {
    cout << "\nOperazioni possibili:\n"
         << "Inserimento (i)\n" 
         << "Ricerca per cognome (r)\n" 
         << "Ricerca per nome (R)\n" 
         << "Stampa ordinata per cognome(c)\n" 
         << "Stampa ordinata per nome(n)\n" 
         << "Fine (f)\n";
    cin >> res;
    switch (res) {
    case 'i':
      p = leggi_persona();
      inserisci(agenda,p);
      break;
    case 'r':
      cout << "Cognome? : ";
      cin >> cognome;
      p=ricerca_per_cognome(cognome,agenda);
      if (p!=NULL)
        stampa(p);
      else
        cout << "Valore non trovato!\n";
      break;
    case 'R':
      cout << "Nome? : ";
      cin >> nome;
      p=ricerca_per_nome(nome,agenda);
      if (p!=NULL)
        stampa(p);
      else
        cout << "Valore non trovato!\n";
      break;
    case 'c':
      cout << "Stampa ordinata per cognome:\n";
      stampa_ordinata_cognome(agenda);
      break;
    case 'n':
      cout << "Stampa ordinata per nome:\n";
      stampa_ordinata_nome(agenda);
      break;
    case 'f':
      break;
    default:
      cout << "Optione errata\n";
    }
  } while (res != 'f');
}



