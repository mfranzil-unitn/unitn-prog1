#ifndef TREE_H 
#define TREE_H 

#include <iostream>
#include "person.h"

using namespace std;

enum retval {FAIL,OK};

struct nodo;

typedef nodo * tree;

struct nodo 
{  
  item val;  
  tree left;  
  tree right;
};

void init(tree &);
bool nullp(const tree & );
retval insert(tree &, item);
tree cerca (const tree &,item);
void print(const tree &);

#endif
