/*
  Implementazione dell'albero binario ordinato
  con "key_value" come contenuto dei nodi.
  La ricerca si svolge per chiave.
*/

#include <iostream>

using namespace std;

// Non serve includere "key_value.h"
// perche' e' gia' incluso da "tree.h"
#include "02-tree.h"

void init(tree & t) {
  t=NULL;
}

tree  inserisci(tree t, key_value* kv) {
  if (t==NULL) {
    t = new nodo; 
    t->kv = kv;
    t->left = NULL; 
    t->right = NULL; 
  }
  else if ((kv -> key) <= (t -> kv -> key)) 
    t->left = inserisci(t->left, kv);
  else 
    t->right = inserisci(t->right, kv);
  return t;
}


tree  cerca (tree  t, int key) { 
  if ((t==NULL) || (key == t -> kv -> key))
    return t;
  if (key < t -> kv -> key) 
    return cerca(t->left, key);
  else 
    return cerca(t->right, key);
}

void stampa_ordinata(tree  t) {
  if (t!=NULL) {
    stampa_ordinata(t->left);
    cout << "(" <<  t -> kv -> key 
      << ", " << t -> kv -> value << ")";
    stampa_ordinata(t->right);
  }
}
