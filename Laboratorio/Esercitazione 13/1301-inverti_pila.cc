/*
  Implementare la funzione "reverse" che, impiegando
  contemporaneamente le librerie "pila" e "coda",
  inverte il contenuto della pila ricevuta in ingresso.

  Modificare le librerie "struct_stack.h" e "struct_queue.h",
  in modo che accettino pile e code di char* anziche' di int;
  attenzione ai conflitti sui tipi di ritorno "retval".
*/

#include <iostream>
#include <cstdlib>
#include "01-struct_stack_string.h"
#include "01-struct_queue_string.h"

using namespace std;

void reverse(stack& s);

int main(int argc, char* argv[]) {
  if(argc < 2) {
    cerr << "Serve almeno un argomento.\n";
    exit(-1);
  }
  // Riempie la pila
  stack pila;
  init(pila);
  for(int i = 1; i < argc; i++) {
    push(argv[i], pila);
  }
  cout << "Contenuto pila prima dell'inversione: " 
    << endl;
  print(pila);
  // Inversione della pila tramite una coda
  reverse(pila);
  cout << "Contenuto pila dopo l'inversione: " 
    << endl;
  print(pila);
  return 0;
}

void reverse(stack& s) {
  // Coda temporanea
  queue tmp;
  init(tmp);
  char* item;
  // Svuota la pila riempiendo la coda
  while(OK == top(item, s)) {
    enqueue(item, tmp); 
    pop(s);
  }
  // Svuota la coda riempiendo la pila
  while(OK == first(item, tmp)) {
    push(item, s); 
    dequeue(tmp);
  }
}
