// ESEMPIO DI COSTANTE PUNTATORE 

using namespace std;
#include <iostream>

int main()
{
  int a, b;
  int *const pa = &a;
  *pa = 3;  // ok
  //pa = &b   // errore: pa e' costante
return 0;
}

