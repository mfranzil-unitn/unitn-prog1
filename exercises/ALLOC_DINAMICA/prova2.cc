using namespace std;
#include <iostream>
#include <cctype>
#include <cstring>
 
int main () 
{
  const int dim = 20;
  int *p;
  char * sa = new char [dim];
  char * sb = new char [dim];
  char *sc;
  //cin >> sc; // errore: non allocata!
  do {
    cin >> sa >> sb;
    sc = new char[strlen(sa)+strlen(sb)+1];
    strcpy(sc,sa);
    strcat(sc,sb);
    cout << sc << endl;
    delete [] sc;
  } while (isalnum(sa[0]));
  delete [] sa; 
  delete [] sb;
return 0; 
}

