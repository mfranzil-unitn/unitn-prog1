using namespace std;
#include <iostream>
#include "queue.h"

int main () 
{
  char res;
  int num;  
  init();
  do {
    cout << "\nOperazioni possibili:\n"
         << "Enqueue (e)\n" 
         << "Dequeue (d)\n" 
         << "Fine (f)\n";
    cin >> res;
    switch (res) {
    case 'e':
      cout << "Valore: ";
      cin >> num;
      if (enqueue(num)==FAIL)
        cout << "Coda piena\n";
      break;
    case 'd':
      if (dequeue(num)==FAIL)
        cout << "Coda vuota\n";
      else 
        cout << "Val: " << num << endl;
      break;
    case 'f':
      break;
    default:
      cout << "Valore errato!\n";
    }
  } while (res != 'f');  
}

    
