using namespace std;
#include <iostream>

#include "tree1.h"

void init(tree & t) {
  t=NULL;
}

void deinit(tree & t) {
  if (t!=NULL) {
    deinit(t->left);
    deinit(t->right);
    delete t;
  }
}

tree  insert(tree t, char v) {
  if (t==NULL) {
    t = new node; 
    t->item = v;
    t->left = NULL; 
    t->right = NULL; }
  else if (v <= t->item) 
    t->left = insert(t->left, v);
  else if (v > t->item) 
    t->right = insert(t->right, v);
  return t;
}


tree  cerca (tree  t,char elem) { 
  tree res;
  if ((t==NULL) || (elem==t->item))
    res = t;
  else if (elem <= t->item) 
    res = cerca(t->left,elem);
  else if (elem > t->item)
    res = cerca(t->right,elem);
  return res;
}

void print_ordered(tree  t) {
  if (t!=NULL) {
    print_ordered(t->left);
    cout << t->item << endl;
    print_ordered(t->right);
  }
}

void print_indented(tree t,int depth) { 
  int i;
  if (t!=NULL) {
    print_indented(t->right,depth+1);
    for(i=0;i<depth;i++) 
      cout << "  ";
    cout << t->item << endl;
    print_indented(t->left,depth+1);
  }
}





