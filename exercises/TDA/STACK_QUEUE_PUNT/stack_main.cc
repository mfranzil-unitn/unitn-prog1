using namespace std;
#include <iostream>
#include "stack.h"

int main () 
{
  char res;
  int val;
  init();
  do {
    cout << "\nOperazioni possibili:\n"
         << " Push (u)\n" 
         << " Pop (o)\n" 
         << " Top (t)\n" 
         << " Print (p)\n" 
	 << " Fine (f)\n";
    cin >> res;
    switch (res) {
    case 'u':
      cout << "Val? : ";
      cin >> val;
      if (push(val)==FAIL)
	cout << "Memoria esaurita!\n";
      break;
    case 'o':
      if (pop()==FAIL)
	cout << "Stack vuoto!\n";
      break;
    case 't':
      if (top(val)==FAIL)
	cout << "Stack vuoto!\n";
      else cout << "Top = " << val << endl;
      break;
    case 'p':
      print();
      break;
    case 'f':
      break;
    default:
      cout << "Opzione errata\n";
    }
  } while (res != 'f');
}

    
    
