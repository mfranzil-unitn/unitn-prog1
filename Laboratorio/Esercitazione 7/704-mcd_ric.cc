/*
  Dichiarare e implementare la funzione "MCD" che 
  calcola il Massimo Comun Divisore di due valori x e y 
  in modo ricorsivo. x ed y devono essere ordinati 
  in modo che x > y.

  Algoritmo (formula di Euclide):
  - se y vale 0, allora mcd(x, y) è pari a x
  - altrimenti mcd(x, y) è pari a mcd(y, x % y)
*/

#include <iostream>

using namespace std;

int MCD(int, int);

int main(){
   int x, y;
   cout << "Inserire il primo numero: ";
   cin >> x;
   cout << "Inserire il secondo numero: ";
   cin >> y;
   cout << "MCD(" << x << ", " << y << ") = " << 
        ((x > y) ? MCD(x,y) : MCD(y, x)) << endl;
   return 0;
}

int MCD(int a, int b){
   return (b == 0) ? a : MCD(b, a % b);
}
