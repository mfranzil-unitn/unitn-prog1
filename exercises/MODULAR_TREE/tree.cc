using namespace std;
#include <iostream>
#include "tree.h"
#include "char.h"

// FUNZIONI AUSILIARIE

static void print_spaces(int depth) {
  for(int i=0;i<depth;i++) 
      cout << "  ";
}

static bool emptyp(const tree & t) {
  return (t==NULL);
}

// FUNZIONI PRINCIPALI

void init(tree & t) {
  t=NULL;
}

void deinit(tree & t) {
  if (!emptyp(t)) {
    deinit(t->left);
    deinit(t->right);
    delete t;
  }
}

// valuta il valore ritornato da 'cerca'
// diverso da `emptyp'
bool nullp(const tree & t) {
  return (t==NULL);
}

retval insert(tree & t, contenuto v) {
  retval res;
  if (emptyp(t)) {
// memo: "new (nothrow) ..." restituisce NULL
// senza generare eccezioni se l'allocazione non va a buon fine
    t = new (nothrow) node;
    if (t==NULL)
      res = FAIL; 
    else {
      t->item = v;
      t->left = NULL; 
      t->right = NULL; 
      res = OK;
    }
  }
  else if (confronta(chiaveDi(v),t->item)<=0) 
    res = insert(t->left, v);
  else if (confronta(chiaveDi(v),t->item) > 0) 
    res = insert(t->right, v);
  return res;
}

tree  cerca (const tree & t,chiave c) { 
  tree res;
  if (emptyp(t)) 
    res = NULL;
  else if (confronta(c,t->item)==0) 
    res = t;
  else if (confronta(c,t->item)<0) 
    res = cerca(t->left,c);
  else if (confronta(c,t->item)>0)
    res = cerca(t->right,c);
  return res;
}

void print_ordered(const tree & t) {
  if (!emptyp(t)) {
    print_ordered(t->left);
    stampa(t->item);
    print_ordered(t->right);
  }
}

void print_indented(const tree & t) { 
  static int depth=0;
  depth++;
  if (!emptyp(t)) {
    print_indented(t->right);
    print_spaces(depth);
    stampa(t->item);
    print_indented(t->left);
  }
  depth--;
}




