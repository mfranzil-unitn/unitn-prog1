using namespace std;
#include <iostream>
#include "struct_stack.h"

int main () 
{
  char res;
  int val;
  stack s;
  
  init(s);
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
      if (push(val,s)==FAIL)
	cout << "Stack pieno!\n";
      break;
    case 'o':
      if (pop(s)==FAIL)
	cout << "Stack vuoto!\n";
      break;
    case 't':
      if (top(val,s)==FAIL)
	cout << "Stack vuoto!\n";
      else cout << "Top = " << val << endl;
      break;
    case 'p':
      print(s);
      break;
    case 'f':
      break;
    default:
      cout << "Opzione errata\n";
    }
  } while (res != 'f');
  deinit(s);
}

    
    
