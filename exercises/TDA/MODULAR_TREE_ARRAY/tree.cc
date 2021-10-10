using namespace std;
#include <iostream>
#include "tree.h"

// AUXILIARY FUNCTIONS

static tree left(const tree & t) {
  tree res;
  res.pos = 2*t.pos+1;
  res.array=t.array;
  return res;
}

static tree right(const tree & t) {
  tree res;
  res.pos = 2*t.pos +2;
  res.array=t.array;
  return res;
}

static char & elem(const tree & t) {
  return t.array[t.pos];
}

static int emptyp(const tree & t) {
  return (elem(t)==CONTENUTO_NULLO);
}

// valuta il valore ritornato da 'cerca'
// diverso da `emptyp'
bool nullp(const tree & t) {
  return (t.pos==-1);
}


static tree mknull() {
  tree res;
  res.pos=-1;
  return res;
}

static void print_spaces(int depth) {
  for(int i=0;i<depth;i++) 
      cout << "  ";
}



// MAIN FUNCTIONS

void init(tree & t) {
  t.pos=0;
  t.array = new char[MAXSIZE];
  for (int i=0;i<MAXSIZE;i++)
    t.array[i] = CONTENUTO_NULLO;
}

retval insert(tree & t, char v) {
  tree t1;
  if (t.pos >= MAXSIZE)
    return FAIL;
  if (emptyp(t)) {
    elem(t)=v; 
    return OK;
  }
  else if (confronta(v,elem(t))<=0) {
    t1 = left(t);
    return insert(t1,v);
  }
  else if (confronta(v,elem(t))>0) {
    t1 = right(t);
    return insert(t1,v);
  }
}
   
void print_ordered(const tree & t) {
  if (!emptyp(t)) {
    print_ordered(left(t));
    stampa(elem(t));
    print_ordered(right(t));
  }
}

void print_indented(const tree & t) {
  static int depth=0;
  depth++;
  if (!emptyp(t)) {
    print_indented(right(t));
    print_spaces(depth);
    stampa(elem(t));
    print_indented(left(t));
  }
  depth--;
}



tree cerca (const tree & t,char item) { 
  tree res;
  if (emptyp(t)) {
    return mknull();
  }
  if (confronta(elem(t),item)==0) {
    return t;
  }
  if (confronta(elem(t),item)>0) {
    return cerca(left(t),item);
  }
  else if (confronta(elem(t),item)<0) {
    return cerca(right(t),item);
  }
}





