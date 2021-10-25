using namespace std;
#include <iostream>

#include "persona.h"
#include "tree.h"

int main () 
{
  
  persona * p;
  tree  agenda;
  char cognome[MAX_DIM];
  char indirizzo[MAX_DIM];
  char res;
  tree  tmp;
  
  init(agenda);

    do {
    cout << "\nOperazioni possibili:\n"
         << "Inserimento (i)\n" 
         << "Ricerca per cognome (r)\n" 
         << "Stampa ordinata (s)\n" 
         << "Modifica indirizzo (m)\n" 
         << "Fine (f)\n";
    cin >> res;
    switch (res) {
    case 'i':
      p = leggi_persona();
      agenda = inserisci(agenda,p);
      break;
    case 'r':
      cout << "Cognome? : ";
      cin >> cognome;
      tmp=cerca(agenda,cognome);
      if (tmp!=NULL)
        stampa_persona(tmp->p);
      else
        cout << "Valore non trovato!\n";
      break; 
    case 's':
      cout << "Stampa ordinata:\n";
      stampa_ordinata(agenda);
      break;
    case 'm':
      cout << "Cognome? : ";
      cin >> cognome;
      cout << "Nuovo indirizzo? : ";
      cin >> indirizzo;
      tmp=modifica_indirizzo(agenda,cognome,indirizzo);
      if (tmp==NULL)
        cout << "Valore non trovato!\n";
      break;
    case 'f':
      break;
    default:
      cout << "Optione errata\n";
    }
  } while (res != 'f');
  deinit(agenda);
}



