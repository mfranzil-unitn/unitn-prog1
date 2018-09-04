/*
  Implementare la funzione 'media', che calcola la media in maniera
  ricorsiva, ma in modo interattivo; alla fine di ogni esecuzione,
  all'utente viene richiesto se inserire un nuovo numero
  per aggiornare la media. In questo caso, la funzione invoca
  nuovamente se' stessa; altrimenti, termina.

  NB: ci sono due parametri, la somma dei numeri introdotti fino a quel moento, e un contatore che conta il numero di invocazioni (corrisponde al numero di
  valori introdotti, e serve per calcolare la media ad ogni passaggio)
*/

#include <iostream>

using namespace std;

void media(long s, int ctr);

int main() {
   media(0.0, 0);
   return(0);
}

void media(long s, int ctr) {
   double n;
   char c;
   cout << "Inserire un numero: ";
   cin >> n;
   // Oppure: s = s + n;
   s += n;
   // Oppure: ctr = ctr + 1;
   ctr++;
   cout << "Media parziale: " << s/(double)ctr << endl;
   cout << "Vuoi continuare? [s/n] ";
   cin >> c;
   if(c == 's' || c == 'S') {
      // Passo ricorsivo
      media(s, ctr);
   }
   // Caso base: l'utente non ha scelto 's' o 'S'
}
