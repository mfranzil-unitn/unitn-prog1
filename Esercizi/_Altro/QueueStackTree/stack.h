#ifndef STACK_H
#define STACK_H

struct nodo_s;

typedef nodo_s* stack;

struct nodo_s
 {
	int val;
	nodo_s* next;
};

void init(stack &s);
void deinit(stack &s);
bool push(stack &s, int val);
bool pop(stack &s);
bool empty(const stack &s);
bool top(const stack &s, int &result);
void print(const stack &s);

#endif

