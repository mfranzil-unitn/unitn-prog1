using namespace std;
#include <iostream>
#include "struct_queue.h"


int main () 
{
  char res;
  int num;  
  queue q;
  
  init(q);
  do {
    cout << "\nOperazioni possibili:\n"
         << "Enqueue (e)\n" 
         << "First (f)\n" 
         << "Dequeue (d)\n" 
         << "Print (p)\n" 
         << "Exit (x)\n";
    cin >> res;
    switch (res) {
    case 'e':
      cout << "Valore: ";
      cin >> num;
      if (enqueue(num,q)==FAIL)
        cout << "Coda piena\n";
      break;
    case 'f':
      if (first(num,q)==FAIL)
        cout << "Coda vuota\n";
      else 
        cout << "Val: " << num << endl;
      break;
    case 'd':
      if (dequeue(q)==FAIL)
        cout << "Coda vuota\n";
      break;
    case 'p':
      print(q);
      break;
    case 'x':
      break;
    default:
      cout << "Valore errato!\n";
    }
  } while (res != 'x');  
  deinit(q);
}

    
