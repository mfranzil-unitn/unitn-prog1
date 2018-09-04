#ifndef __MAP_H_
#define __MAP_H_

struct key_value {
  int key;
  int value;
};

struct map_item {
  key_value* elem;
  map_item* next;
};

struct Map {
  map_item* first;
};

void init (Map &);
int get(const Map &, int);
void set(Map &, int, int);
void deinit (Map &);

#endif
