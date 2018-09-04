#ifndef __MAP_H_
#define __MAP_H_

struct key_value {
  int key;
  int value;
};

struct Map {
  key_value* array;
  int dim;
};

void init (Map &, int dim);
int get(const Map &, int);
void set(Map &, int, int);
void deinit (Map &);

#endif
