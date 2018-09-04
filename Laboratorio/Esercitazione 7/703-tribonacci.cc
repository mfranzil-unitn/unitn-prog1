/* 
  Dichiarare e definire la funzione tribonacci che implementa
  in modo ricorsivo una variante della sequenza di Fibonacci, dove 
  
  T(0)=0
  T(1)=1
  T(2)=1
  T(n) = T(n - 1) + T(n - 2) + T(n - 3)

  per ogni n >= 0.
*/

#include <iostream>

using namespace std;

int tribonacci(int n);

int main() {
  int n;
  cout << "Dammi un numero: ";
  cin >> n;
  cout << "T(" << n << ") = " << tribonacci(n) << endl;
  return 0;
}

int tribonacci(int n) {
  // Notare che, se n < 0, il risultato e' volutamente
  // indefinito
  int i;
  if(n >= 0) {
    switch(n) {
      case 0:
        i = 0;
        break;
      case 1:
      case 2:
        i = 1;
        break;
      default:
        i = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    }
  }
  return i;
}
