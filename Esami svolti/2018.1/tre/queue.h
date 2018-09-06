#ifndef STRUCT_QUEUE_H
#define STRUCT_QUEUE_H

struct elem {
  float value;
  elem* next;
};

struct queue {
  elem* head;
  elem* tail;
};

void init(queue &q);
void deinit(queue &q);
bool enqueue(queue &q, float n);
bool dequeue(queue &q);
bool first(const queue &q, float &out);
void print(const queue &q);

#endif
