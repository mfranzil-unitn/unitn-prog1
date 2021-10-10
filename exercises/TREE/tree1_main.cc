using namespace std;
#include <iostream>

#include "tree1.h"

int main() 
{
  char res,val;
  tree t, tmp;
  init(t);
  do {
    cout << "\nOperazioni possibili:\n"
         << "Inserimento (i)\n" 
         << "Ricerca (r)\n" 
         << "Stampa ordinata (s)\n" 
         << "Stampa indentata (e)\n"
         << "Fine (f)\n";
    cin >> res;
    switch (res) {
    case 'i':
      cout << "Val? : ";
      cin >> val;
      t=insert(t,val);
      break;
    case 'r':
      cout << "Val? : ";
      cin >> val;
      tmp=cerca(t,val);
      if (tmp!=NULL)
        cout << "Valore trovato!: " << val << endl;
      else
        cout << "Valore non trovato!\n";
      break;
    case 's':
      cout << "Stampa ordinata:\n";
      print_ordered(t);
      break;
    case 'e':
      cout << "Stampa indentata:\n";
      print_indented(t,0);
      break;
    case 'f':
      break;
    default:
      cout << "Optione errata\n";
    }
  } while (res != 'f');
  deinit(t);
}

    
    











