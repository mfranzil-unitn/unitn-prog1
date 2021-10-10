using namespace std;
#include <iostream>
#include "struct_stack.h"

int main () 
{
  char res;
  int val,i,num;
  stack s;
 
  cout << "numero di elementi? ";
  cin >> num;
  init(s);
  for (i=0;i<num;i++) {
    cout << "Numero [" << i << "]? ";
    cin >> val;
    push(val,s);
  }
  for (i=0;i<num;i++) {
    top(val,s);
    pop(s);
    cout << val << endl;
  }
  deinit(s);
}


    
    
