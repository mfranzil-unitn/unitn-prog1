/*
  Modificare l'esempio "fibonacci_din" per impiegare
  come cache la struttura "Map" definita nel file "map.h"
  al posto di un array dinamico.
  Ricordarsi di inizializzarla prima di impiegarla
  nella main e di deinizializzarla terminato l'uso.
*/

#include <iostream>
#include "01-map.h"

using namespace std;

int fibonacci(int, Map&);

int main(int argc, char* argv[]) {
  int n;
  cout << "Calcolo dell'n-esimo numero di Fibonacci.\n";
  cout << "n = ";
  // Test di controllo sull'input
  do {
    cin >> n;
    if(n < 1) {
      cout << "Introdurre un numero positivo.\nn = ";
    }
  } while(n < 1);
  // Dichiara la struttura dati che fara' da cache
  Map fib;
  // La inizializza
  init(fib);
  cout << "F(n) = " << fibonacci(n, fib) << endl;
  // Infine, la deinizializza
  deinit(fib);
}

int fibonacci(int n, Map& cache) {
  int ris = 0;
  // n deve essere positivo; in tutti gli altri casi,
  // F(n) ritorna 0 (e non accedo alla cache)
  if(n > 0) {
    // L'ho gia' calcolato?
    if(get(cache, n - 1) > 0) {
      // Lo impiego (cache hit)
      ris = get(cache, n - 1);
    } else {
      // Lo calcolo (cache miss)
      switch(n) {
        case 1:
        case 2:
          set(cache, n - 1,  1);
          break;
        default:
          set(cache, n - 1, 
            fibonacci(n - 1, cache) + fibonacci(n - 2, cache));
      }
      // Ritorno quanto trovato
      ris = get(cache, n - 1);
    }
  }
  return ris;
}
