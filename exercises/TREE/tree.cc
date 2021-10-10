using namespace std;
#include <iostream>
#include "tree.h"

// AUXILIARY FUNCTIONS

static void print_spaces(int depth) {
  for(int i=0;i<depth;i++) 
      cout << "  ";
}

static bool emptyp(const tree & t) {
  return (t==NULL);
}

// MAIN FUNCTIONS

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

retval insert(tree & t, char v) {
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
  else if (v <= t->item) 
    res = insert(t->left, v);
  else if (v > t->item) 
    res = insert(t->right, v);
  return res;
}

tree  cerca (const tree & t,char elem) { 
  tree res;
  if (emptyp(t)) 
    res = NULL;
  else if (elem==t->item)
    res = t;
  else if (elem < t->item) 
    res = cerca(t->left,elem);
  else if (elem > t->item)
    res = cerca(t->right,elem);
  return res;
}



void print_ordered(const tree & t) {
  if (!emptyp(t)) {
    print_ordered(t->left);
    cout << t->item << endl;
    print_ordered(t->right);
  }
}

void print_indented(const tree & t) { 
  static int depth=0;
  depth++;
  if (!emptyp(t)) {
    print_indented(t->right);
    print_spaces(depth);
    cout << t->item << endl;
    print_indented(t->left);
  }
  depth--;
}




