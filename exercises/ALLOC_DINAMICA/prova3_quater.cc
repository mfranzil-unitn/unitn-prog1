using namespace std;
#include <iostream>
#include <cstdlib>
#include <new>
#include <cstring>
 

int main () 
{
  const int mymax = 1024;
  int i;

  for (i=0;i<10000;i++) {
    char * p = new char [mymax*mymax];
    if (p==NULL){
       cout << "Memoria esaurita: " 
       << "impossibile allocare " << endl;
       exit(0);
    }
    cout << i << endl;
    delete p;
  }
}

