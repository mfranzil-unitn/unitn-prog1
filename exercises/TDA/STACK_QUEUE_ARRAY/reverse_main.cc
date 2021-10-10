using namespace std;
#include <iostream>
#include "stack.h"

int main () 
{
  char res;
  int val,i,num;
 
  cout << "numero di elementi? ";
  cin >> num;
  init();
  for (i=0;i<num;i++) {
    cout << "Numero [" << i << "]? ";
    cin >> val;
    push(val);
  }
  for (i=0;i<num;i++) {
    top(val);
    pop();
    cout << val << endl;
  }
}


    
    
