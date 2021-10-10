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
         << "Fine (f)\n";
    cin >> res;
    switch (res) {
    case 'i':
      p = leggi_persona();
      insert(agenda,p);
      break;
    case 'r':
      cout << "Cognome? : ";
      cin >> cognome;
      tmp=cerca(agenda,cognome);
      if (!nullp(tmp))
        stampa(tmp->item);
      else
        cout << "Valore non trovato!\n";
      break; 
    case 's':
      cout << "Stampa ordinata:\n";
      print_ordered(agenda);
      break;
    case 'f':
      break;
    default:
      cout << "Optione errata\n";
    }
  } while (res != 'f');
}



