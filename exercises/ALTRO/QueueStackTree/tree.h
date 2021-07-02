#ifndef TREE_H
#define TREE_H

struct nodo_a;

typedef nodo_a* tree;

struct nodo_a
{
	int val;
	tree sx;
	tree dx;
};

void init(tree &a);
bool empty(const tree &a);
bool insert(tree &a, int val);
bool search(const tree &a, int val);
void print(const tree &a);

#endif