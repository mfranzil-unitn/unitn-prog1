using namespace std;
#include <iostream> 

struct S1 {
 int value;
  S2 *next; 
}; // Ok!

struct S2  { // definizione di S2
  int value;
  S1 *next;
};

int main () 
{

 S1 x = {4 , NULL};
 S2 y = {7 , NULL};

  return 0;
}

