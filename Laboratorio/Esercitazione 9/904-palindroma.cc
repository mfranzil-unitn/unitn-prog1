/*
  Dichiarare e definire la funzione 'palindroma' che
  testa se una stringa ricevuta in ingresso e' o meno
  palindroma.
  Una stringa e' palindroma se puo' essere letta
  indifferentemente da destra a sinistra e da sinistra a destra;
  per esempio, 'ala' e' palindroma, 'alt' non lo e'.
  La funzione deve essere ricorsiva; e' ammessa la definizione
  di funzioni ausiliarie qualora ritenuto utile.`
*/

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

const int LUNGHEZZA = 256;

bool palindroma(const char s[]);
bool palindroma(const char s[], int start, int end);

int main(int argc, char* argv[]) {
  char stringa[LUNGHEZZA];
  cin.getline(stringa, LUNGHEZZA);
  cout << "La stringa introdotta" << (!palindroma(stringa) ? " non" : "") <<  " e' palindroma.\n";
  return 0;
}

bool palindroma(const char s[]) {
  return palindroma(s, 0, strlen(s));
}

bool palindroma(const char s[], int start, int end) {
  /*
    Oppure:
      return (end > start) ? 
        ( (s[start] == s[end]) && palindroma(s, start + 1, end - 1) ) : 
        true;
  */
  bool ris = true;
  if(end > start) {
    ris = (s[start] == s[end - 1]) && palindroma(s, start + 1, end - 1);
  }
  return ris;
}
