#include "persona.h"

// ---------- MODO RICERCA (PER NOME O COGMOME) ----- 

chiave chiaveDi(persona * v) {
  if (modalita==COGNOME) 
    return v->cognome;
  else
    return v->nome;    
}

// restituisce rispettivamente -1,0,1 
// se v1 e' piu' piccolo, uguale o piu' grande di v2
int confronta(chiave c,persona * v1) {
  if (modalita==COGNOME) 
    return strcmp(c,v1->cognome);
  else
    return strcmp(c,v1->nome);
}

void modalita_cognome() {
  modalita = COGNOME;
}

void modalita_nome() {
  modalita = NOME;
}


// ------------------------------------------------


persona * crea_persona(char *nome,char *cognome, 
                       char *indirizzo,int ntel)
{
  persona * p = new persona;
  strncpy(p->nome,nome,MAX_DIM);
  strncpy(p->cognome,cognome,MAX_DIM);
  strncpy(p->indirizzo,indirizzo,MAX_DIM);
  p->ntel = ntel;
  return p;
}

persona * leggi_persona()
{
  persona * p;
  char nome[MAX_DIM];
  char cognome[MAX_DIM];
  char indirizzo[MAX_DIM];
  int tel;

  cout << "Nome: ";
  cin >> nome;
  cout << "Cognome: ";
  cin >> cognome;
  cout << "Indirizzo: ";
  cin >> indirizzo;
  cout << "N. tel: ";
  cin >> tel;
  
  p = crea_persona(nome,cognome,indirizzo,tel) ;
  
  return p;
}

void stampa(persona * p) 
{
  cout << "vvvvvvvvvvvvvvvvvvvv\n";
  cout <<  p->nome << endl;
  cout <<  p->cognome << endl;
  cout <<  p->indirizzo << endl;
  cout <<  p->ntel << endl;
  cout << "^^^^^^^^^^^^^^^^^^^^\n";
}

