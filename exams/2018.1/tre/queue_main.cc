using namespace std;
#include <iostream>
#include "queue.h"

int main() {
  char res;
  float num;  
  queue q;

  init(q);
  do {
    cout << "\nOperazioni possibili:\n"
         << "Enqueue (e)\n" 
         << "Dequeue (d)\n" 
         << "First (f)\n"  
         << "Print (p)\n" 
         << "Quit (q)\n";
    cin >> res;
    switch (res) {
    case 'e':
      cout << "Valore: ";
      cin >> num;
      if (!enqueue(q, num)) {
        cout << "Memoria piena!\n";
      }
      break;
    case 'd':
      if (!dequeue(q)) {
        cout << "Coda vuota\n";
      }
      break;
    case 'f':
      if (!first(q, num)) {
        cout << "Coda vuota!\n";
      } else {
        cout << "Primo elemento = " << num << endl;
      }
      break;
    case 'p':
      print(q);
      break;
    case 'q':
      break;
    default:
      cout << "Valore errato!\n";
    }
  } while (res != 'q');
  deinit(q);

  return 0;
}
