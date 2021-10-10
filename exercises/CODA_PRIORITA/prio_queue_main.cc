using namespace std;
#include <iostream>

#include "message.h"
#include "struct_queue.h"
#include "prio_queue.h"


int main() 
{
  char res;
  priority_queue q;
  message * pm;

  priority_queue_init(q);
  do {
    cout << "\nOperazioni possibili:\n"
         << "Enqueue (e)\n" 
         << "Dequeue (d)\n" 
         << "Print (p)\n" 
         << "Fine (f)\n";
    cin >> res;
    switch (res) {
    case 'e':
      pm = new message;
      if (!read_message(*pm))
        cout << "Priorita` errata\n";	
      else if (priority_queue_enqueue(pm,q)==FAIL)
        cout << "Coda piena\n";
      break;
    case 'd':
      if (priority_queue_dequeue(pm,q)==FAIL)
        cout << "Coda vuota\n";
      else {
        print_message(*pm);
        delete pm;
      }
      break;
    case 'p':
      priority_queue_print(q);
      break;
    case 'f':
      break;
    default:
      cout << "Valore errato!\n";
    }
  } while (res != 'f');  
  priority_queue_deinit(q);
}

    
