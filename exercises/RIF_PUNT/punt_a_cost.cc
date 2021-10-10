// ESEMPIO DI PUNTATORE A COSTANTE

using namespace std;
#include <iostream>

int main()
{
  const int c1 = 3;       
  int c2 = 5;
  const int *pc1 = &c1;  // ok PUNTATORI A COSTANTE
  const int *pc2 = &c2;  // ok

  pc2 = pc1; // ok
  pc1 = &c2; // ok
  c2 = 2;    // ok
  //*pc1 = 2;  
//                errore: non e'
//                possibile modificare c2
//  	          tramite pc1 
    }

