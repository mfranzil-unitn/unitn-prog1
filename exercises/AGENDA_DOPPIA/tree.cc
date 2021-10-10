using namespace std;
#include <iostream>
#include <cstring>

#include "persona.h"
#include "tree.h"

void init_tree (tree & t) {
  t=NULL;
}

tree  inserisci_cognome(tree t, persona * p) {
  if (t==NULL) {
    t = new nodo; 
    t->p = p;
    t->left = NULL; 
    t->right = NULL; 
  }
  else if (strcmp(p->cognome,t->p->cognome)<=0)
    t->left = inserisci_cognome(t->left, p);
  else 
    t->right = inserisci_cognome(t->right, p);
  return t;
}

tree  inserisci_nome(tree t, persona * p) {
  if (t==NULL) {
    t = new nodo; 
    t->p = p;
    t->left = NULL; 
    t->right = NULL; 
  }
  else if (strcmp(p->nome,t->p->nome)<=0)
    t->left = inserisci_nome(t->left, p);
  else 
    t->right = inserisci_nome(t->right, p);
  return t;
}

tree  cerca_cognome (tree  t,char * cognome) { 
  if ((t==NULL) || (strcmp(cognome,t->p->cognome)==0))
    return t;
  if (strcmp(cognome,t->p->cognome)<0) 
    return cerca_cognome(t->left,cognome);
  else 
    return cerca_cognome(t->right,cognome);
}

tree  cerca_nome (tree  t,char * nome) { 
  if ((t==NULL) || (strcmp(nome,t->p->nome)==0))
    return t;
  if (strcmp(nome,t->p->nome)<0) 
    return cerca_nome(t->left,nome);
  else 
    return cerca_nome(t->right,nome);
}

tree  modifica_indirizzo_cognome (tree  t,char * cognome,char * indirizzo) 
{
  tree  tmp = cerca_cognome(t,cognome);
  if (tmp==NULL) 
    return tmp;
  strncpy(tmp->p->indirizzo,indirizzo,MAX_DIM);
  return tmp;
}

tree  modifica_indirizzo_nome (tree  t,char * nome,char * indirizzo) 
{
  tree  tmp = cerca_nome(t,nome);
  if (tmp==NULL) 
    return tmp;
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

