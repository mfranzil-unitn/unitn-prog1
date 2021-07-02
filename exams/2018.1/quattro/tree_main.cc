#include <iostream>
#include "tree.h"

using namespace std;

void stampa(const tree &);

int main() 
{
  char option,val;
  tree t, tmp;
  retval res;
  init(t);
  do {
    cout << "\nOperazioni possibili:\n"
         << "Inserimento (i)\n" 
         << "Ricerca (r)\n" 
         << "Stampa ordinata (s)\n" 
         << "Stampa indentata (e)\n"
         << "Fine (f)\n";
    cin >> option;
    switch (option) {
    case 'i':
      cout << "Val? : ";
      cin >> val;
      res = insert(t,val);
      if (res == FAIL)
        cout << "spazio insufficiente!\n";
      break;
    case 'r':
      cout << "Val? : ";
      cin >> val;
      tmp=cerca(t,val);
      if (!nullp(tmp))
        cout << "Valore trovato!: " << val << endl;
      else
        cout << "Valore non trovato!\n";
      break;
    case 's':
      cout << "Stampa ordinata:\n";
      stampa(t);
      break;
    case 'f':
      break;
    default:
      cout << "Opzione errata\n";
    }
  } while (option != 'f');
}

// Si scrivano qui sotto le definizioni della funzione *NON RICORSIVA*:
// void stampa(const tree &)
// e di tutte le funzioni e strutture dati ausiliarie richieste.
