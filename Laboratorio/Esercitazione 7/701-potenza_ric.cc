/*
  Dati due numeri interi, calcola il valore
  del primo numero elevato a potenza col secondo come esponente,
  in modo ricorsivo.

  Sono presentate due versioni:
  - con wrapper, ossia tramite l'invocazione di una funzione
    che fa da "intermediaria" tra la funzione chiamante e la
    funzione ricorsiva;
  - senza wrapper.
  
  In questo caso le due versioni sono equivalentemente espressive:
  in molti casi pero', l'utilizzo di una funzione wrapper 
  rende il codice piu' leggibile e piu' facile da riutilizzare.
*/

#include <iostream>

using namespace std;

int potenza(int, int);
int potenza_ric(int, int, int);

int main(){
   int i, j;
   cout << "Inserire base ed esponente: ";
   cin >> i >> j;
   cout << i << " ^ " << j << " = " << potenza(i, j) << endl;
   return(0);
}

/*
  Versione senza wrapper

int potenza(int n, int m) {
   int ris;
   if(m < 1){
      // Caso base
      ris = 1;
   } else {
      // Passo ricorsivo
      ris = n * potenza(n, m - 1);
   }
   return ris;
}
*/

/*
   Wrapper: non e' indispensabile in questo
   caso, puo' esserlo in altri
*/
int potenza(int n, int m) {
  potenza_ric(1, n, m);
}

int potenza_ric(int x, int n, int m) {
   int ris;
   if(x > m){
      // Caso base
      ris = 1;
   } else {
      // Passo ricorsivo
      ris = n * potenza_ric(x + 1, n, m);
   }
   return ris;
}
