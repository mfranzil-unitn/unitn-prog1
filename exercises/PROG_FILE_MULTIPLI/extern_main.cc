using namespace std;
#include <iostream>

 extern int size;

 extern int x;

extern void print_ciao();

int main() {
  print_ciao();
  x = size;
  cout << "size = " << size << ", x = " << x << endl;
}
