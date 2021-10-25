#ifndef TREE_H 
#define TREE_H 

#include "persona.h"

struct nodo; 

typedef nodo * tree;

struct nodo 
{  
  persona * p;  
  tree left;  
  tree right;
};

void init(tree &);
void deinit(tree &);
tree inserisci(tree,persona *);
tree cerca (tree ,char * );
void stampa_ordinata(tree);
tree modifica_indirizzo (tree,char *,char *);

#endif
