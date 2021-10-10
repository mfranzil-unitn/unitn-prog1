#ifndef TREE_H 
#define TREE_H 

enum retval {FAIL,OK};

const int MAXSIZE = 100;

// "puntatore"
struct tree {
  char * array;
  int pos;
};


void init(tree &);
void deinit(tree &);
bool nullp(const tree & );
retval insert(tree &, char);
tree cerca (const tree &,char);
void print_ordered(const tree &);
void print_indented(const tree &);

#endif
