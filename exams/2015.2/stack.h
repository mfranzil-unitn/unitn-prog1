#ifndef STACK_H
#define STACK_H

struct node {
	int val;
	node *next;
};

typedef node *stack;

enum retval {
	FALSE = 0, TRUE = 1
};

void init(stack &s);
void deinit(stack &s);
void push(stack &s, int val);
retval pop(stack &s);
retval empty(const stack &s);
retval top(const stack &s, int &result);
void print(const stack &s);

#endif

