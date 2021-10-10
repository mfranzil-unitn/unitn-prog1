using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
 
void nomemory() 
{
  cerr << "Memoria esaurita: " 
       << "impossibile allocare " << endl;
  exit(0);
}

int main () 
{
  const int mymax = 1024*1024*1024;

  for (int i=0;i<15;i++) {
    // "new (nothrow) ..." restituisce NULL
    // senza generare eccezioni se l'allocazione non va a buon fine
    char * p = new (nothrow) char [mymax];
    if (p==NULL) 
      nomemory();
    for (int j=0;j<mymax/1024;j++) // "utilizzo" l'array p
       p[j*1024]=0;    
    cout << "i= " << i << endl;
    //    delete[] p;
  }
  return 0;
}

