/*
  Implementare un programma che, acquisito dall'utente un numero
  intero di anni, generi in maniera casuale delle statistiche
  mese per mese relative ad un certo indicatore, per tutti gli anni
  considerati, e che calcoli e stampi la media dei valori su ciascun
  anno per ogni mese.
  Si considerino i valori mensili distribuiti uniformemente
  sull'intervallo [50, 100).
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

const int MESI = 12;
const int MIN_RANDOM = 50;
const int MAX_RANDOM = 100;

int main(int argc, char* argv[]) {
  int anni;
  cout << "Quanti anni considerare? ";
  // Test di controllo sull'input
  do {
    cin >> anni;
    if(anni < 1) {
      cout << "Introdurre un numero positivo.\nn = ";
    }
  } while(anni < 1);
  // Allocazione dinamica: prima si allocano "anni" righe
  float** risultati = new float* [anni];
  for(int i = 0; i < anni; i++) {
    // Successivamente, ogni riga avra' "MESI" colonne
    risultati[i] = new float [MESI];
  }
  // Popoliamo la matrice dinamica con valori casuali
  // Inizializzo il generatore dei numeri casuali
  srand(time(NULL));
  for(int i = 0; i < anni; i++) {
    for(int j = 0; j < MESI; j++) {
      // Genera un valore casuale compreso tra
      // "MIN_RANDOM.00" e "MAX_RANDOM.00"
      risultati[i][j] = (rand() % (MAX_RANDOM - MIN_RANDOM) + MIN_RANDOM) / 100.0;
    }
  }
  // Ora calcoliamo le medie mensili sul periodo
  // preso in considerazione
  float medie[MESI] = {};
  // Attenzione, qui scorriamo per colonne e per righe
  for(int i = 0; i < MESI; i++) {
    // Prima sommiamo tutti i valori del mese corrispondente
    for(int j = 0; j < anni; j++) {
      medie[i] += risultati[j][i];
    }
    // Poi dividiamo per il numero di anni trascorso
    medie[i] /= (float)anni;
  }
  // Stampiamo i risultati
  cout << "Medie periodo: \nGen      Feb      Mar      Apr      " 
        << "Mag      Giu      Lug      Ago      Set      " 
        << "Ott      Nov      Dic\n";
  int i;
  for(i = 0; i < MESI - 1; i++) {
    cout << setw(7) << medie[i] << " ";
  }
  cout << setw(7) << medie[i] << "\n";
  // Deallocazione dinamica: prima si deallocano le righe
  for(int i = 0; i < anni; i++) {
    delete risultati[i];
  }
  // Poi si dealloca la matrice
  delete [] risultati;
  return 0;
}
