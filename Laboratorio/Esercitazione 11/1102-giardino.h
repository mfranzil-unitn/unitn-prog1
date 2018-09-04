#ifndef __GIARDINO_H__
#define __GIARDINO_H__

// Numero specie arboree presenti
const int NUMERO_SPECIE = 5;
// Elenco specie arboree
enum Specie {FAGGIO, CILIEGIO, ABETE, NOCE, BETULLA};
const char iniziali_nomi_specie[NUMERO_SPECIE] = {'F', 'C', 'A', 'N', 'B'};

struct Albero {
  Specie nome_specie;
  int numero_identificativo;
};

Albero*** preparaGiardino(int a, int b);
void riempiGiardino(Albero*** g, int a, int b, int n[NUMERO_SPECIE]);
void stampaGiardino(const Albero* const * const * g, int a, int b);

#endif
