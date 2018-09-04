/*
  E' stato necessario "esportare" la definizione del
  tipo "key_value" in un file terzo da importare
  sia in "map.h" che in "tree.h". Notare che non esiste
  un file "key_value.cc".
*/

#ifndef __KEY_VALUE_H_
#define __KEY_VALUE_H_

struct key_value {
  int key;
  int value;
};

#endif
