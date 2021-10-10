using namespace std;
#include <iostream>

int main()
{

  int x=1; // x variabile tipo int
  int *px; // px variabile puntatore
  px=&x;   // accede alla variabile
           // puntatore
  *px=x+1; /* accede alla cella di
			 memoria puntata dalla
			 variabile puntatore */
  
  // quanto vale x?
  cout << "x = " << x << endl;

return 0;
}
