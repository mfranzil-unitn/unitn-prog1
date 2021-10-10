using namespace std;
#include <iostream>
#include "char.h"

chiave chiaveDi(char v) {
  return (chiave) v;
}

// restituisce rispettivamente -1,0,1 
// se c e' piu' piccola, uguale o piu' grande della chiave di v1  
int confronta(chiave c,char v1) {
  int res; 
  if (c<v1)
    res = -1;
  else if (c>v1)
    res = 1;
  else // (c==v1)
    res = 0;
  return res;
}

void stampa(const char & v) {
  cout << v << endl;
}
