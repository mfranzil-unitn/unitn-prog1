#ifndef TREE_H 
#define TREE_H 

enum retval {FAIL,OK};

struct node;

typedef node * tree;

struct node 
{  
  char item;  
  tree left;  
  tree right;
};

void init(tree &);
bool nullp(const tree & );
retval insert(tree &, char);
tree cerca (const tree &,char);

#endif
