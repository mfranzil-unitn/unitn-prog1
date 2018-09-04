/*
  Dichiarare e definire la funzione 'contaOccorrenzeEsito' che
  conta quante volte, in un array di tipo enumerato con tre
  possibili valori (ogni elemento puo' assumere solo uno di
  tre possibili valori), e' presente un certo valore.
  La funzione riceve in ingresso il valore da cercare, l'array
  in cui cercare e la sua dimensione.
*/

#include <iostream>

using namespace std;

enum ESITO {VITTORIA, SCONFITTA, PAREGGIO};

const int DIM = 20;

int contaOccorrenzeEsito(ESITO e, const ESITO sequenza[], int dim);
int contaOccorrenzeEsitoRic(ESITO e, const ESITO sequenza[], int start, int end);

int main() {
  ESITO partite[DIM] = {VITTORIA, SCONFITTA, PAREGGIO, PAREGGIO, SCONFITTA, PAREGGIO, PAREGGIO, SCONFITTA, PAREGGIO, VITTORIA,
                     VITTORIA, VITTORIA, PAREGGIO, SCONFITTA, SCONFITTA, VITTORIA, PAREGGIO, SCONFITTA, VITTORIA, VITTORIA};

  int vittorie, sconfitte, pareggi;
  vittorie = contaOccorrenzeEsito(VITTORIA, partite, DIM);
  sconfitte = contaOccorrenzeEsito(SCONFITTA, partite, DIM);
  pareggi = contaOccorrenzeEsito(PAREGGIO, partite, DIM);
  cout << "Numero vittorie: " << vittorie  << ", numero sconfitte: "
       << sconfitte << ", numero pareggi: " << pareggi << endl;
  
  if((vittorie + sconfitte + pareggi) == DIM) {
    cout << "I conti tornano!\n";
  }
}

/*
  Un'alternativa, senza wrapper e senza bisezione

int contaOccorrenzeEsito(ESITO e, const ESITO sequenza[], int dim) {
  return (dim > 0) ? 
       ( ( (e == sequenza[dim - 1]) ? 1 : 0 ) + contaOccorrenzeEsito(e, sequenza, dim - 1) ) :
       0;
}
*/

int contaOccorrenzeEsito(ESITO e, const ESITO sequenza[], int dim) {
  return contaOccorrenzeEsitoRic(e, sequenza, 0, dim);
}

// Calcola tramite la bisezione
int contaOccorrenzeEsitoRic(ESITO e, const ESITO sequenza[], int start, int end) {
  int ris = 0;
  if(end - start == 0) {
    ris = (e == sequenza[start]) ? 1 : 0;
  } else if (end > start) {
    ris = contaOccorrenzeEsitoRic(e, sequenza, start, start + (end - start) / 2) +
          contaOccorrenzeEsitoRic(e, sequenza, start + ((end - start) / 2) + 1, end);
  }
  return ris;
}
