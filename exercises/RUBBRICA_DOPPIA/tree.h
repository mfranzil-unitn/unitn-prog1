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

void init_tree (tree & );
void deinit_tree (tree & );
tree  inserisci_nome(tree ,persona *);
tree  inserisci_cognome(tree ,persona *);
tree  cerca_cognome (tree  ,char * );
tree  cerca_nome (tree  ,char * );
void stampa_ordinata(tree );
tree  modifica_indirizzo_cognome (tree ,char *,char *);
tree  modifica_indirizzo_nome (tree ,char *,char *);

#endif
