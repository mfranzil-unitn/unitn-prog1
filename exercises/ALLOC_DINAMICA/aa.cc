using namespace std;
#include <iostream>
#include <cstdlib>
#include <new>
#include <cstring>
 
void nomemory(int a) 
{
  cerr << "Memoria esaurita: " 
       << "impossibile allocare " << a << endl;
  exit(0);
}

int main () 
{
  const int mymax = 1024;
  int i;
  set_new_handler(nomemory i);

  for (i=0;i<10000;i++) {
    char * p = new char [mymax*mymax];
    cout << i << endl;
//     delete[] p;
  }
}

