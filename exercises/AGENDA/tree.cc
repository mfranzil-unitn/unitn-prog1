using namespace std;
#include <iostream>

#include <cstring>

#include "persona.h"
#include "tree.h"

//////////////////////////////////////////////// 

void init(tree & t) {
  t=NULL;
}

tree  inserisci(tree t, persona * p) {
  if (t==NULL) {
    t = new nodo; 
    t->p = p;
    t->left = NULL; 
    t->right = NULL; 
  }
  else if ((strcmp(p->cognome,t->p->cognome)<=0)) 
    t->left = inserisci(t->left, p);
  else 
    t->right = inserisci(t->right, p);
  return t;
}


tree  cerca (tree  t,char * cognome) { 
  if ((t==NULL) || (strcmp(cognome,t->p->cognome)==0))
    return t;
  if (strcmp(cognome,t->p->cognome)<0) 
    return cerca(t->left,cognome);
  else 
    return cerca(t->right,cognome);
}

tree  modifica_indirizzo (tree  t, char * cognome,char * indirizzo) 
{
  tree  tmp = cerca(t,cognome);
  if (tmp!=NULL) 
    strncpy(tmp->p->indirizzo,indirizzo,MAX_DIM);
  return tmp;
}


void stampa_ordinata(tree  t) {
  if (t!=NULL) {
    stampa_ordinata(t->left);
    stampa_persona(t->p);
    stampa_ordinata(t->right);
  }
}






