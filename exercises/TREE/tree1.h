#ifndef TREE_H 
#define TREE_H 

struct node;

typedef node * tree;

struct node 
{  
  char item;  
  tree left;  
  tree right;
};


void init(tree &);
void deinit(tree &);
tree  insert(tree , char);
tree  cerca (tree ,char);
void print_ordered(tree );
void print_indented(tree ,int);

#endif
