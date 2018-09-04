/*
  Scrivere un programma che riceve in ingresso
  una stringa e la stampa al contrario: la stringa
  va letta tramite la funzione "getline".
  Utilizzare la libreria "struct_stack_char.h"
  che implementa una pila di caratteri.
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
#include "01-struct_stack_char.h"

using namespace std;

const int LUN = 256;

int main(int argc, char* argv[]) {
  char stringa[LUN];
  stack pila;
  init(pila);
  cout << "Stringa da invertire: ";
  cin.getline(stringa, LUN);
  int lun = strlen(stringa)
  for(int i = 0; i < lun; i++) {
    push(stringa[i], pila);
  }
  char c;
  while(OK == top(c, pila)) {
    cout << c;
    pop(pila);
  }
  cout << endl;
}
