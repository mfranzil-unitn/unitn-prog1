//
// Stampare un certo numero di asterischi in orizzontale, verticale, obliquo destro
// o obliquo sinistro in base a quanto specificato dall'utente
//

#include <iostream>		// Include le dicharazioni per le funzioni
				// di libreria per l'input/output
using namespace std;

void stampa_orizzontale(int);
void stampa_verticale(int);
void stampa_obliquo_da_destra(int);
void stampa_obliquo_da_sinistra(int);

int main() 
{
  enum possibili {EXIT, ORIZ, VERT, OBLI_DX, OBLI_SX};
  int scelta=1, n=0;
  while(scelta != EXIT) 
    {
      cout << "Scegli una tra le seguenti opzioni: " << endl;
      cout << "1. Stampa in orizzontale" << endl;
      cout << "2. Stampa in verticale" << endl;
      cout << "3. Stampa in obliquo da destra" << endl;
      cout << "4. Stampa in obliquo da sinistra" << endl;
      cout << "0. Esci" << endl;
      cout << "Opzione scelta: ";
      cin >> scelta;
      if (scelta>=ORIZ && scelta<=OBLI_SX) {
	cout << "Numero di asterischi da stampare: ";
	cin >> n;
      }
      switch (scelta) 
	{ 
	case ORIZ : stampa_orizzontale(n); break;
	case VERT : stampa_verticale(n); break;
	case OBLI_DX : stampa_obliquo_da_destra(n); break;
	case OBLI_SX : stampa_obliquo_da_sinistra(n); break;
	case EXIT : break; 
	default : cout << "Scelta inesistente!"<<endl; break;
	}
    }
  return(0);
}

void stampa_orizzontale(int n) {
  for(int i=0; i<n; i++)
    cout << "*";
  cout << endl;
}

void stampa_verticale(int n) {
  for(int i=0; i<n; i++)
    cout << "*" << endl;
}

void stampa_obliquo_da_sinistra(int n) {
  for(int i=0; i<n; i++) {
    for (int j=0; j<(n-1)-i; j++)
      cout << " ";
    cout << "*" << endl;
  }
}

void stampa_obliquo_da_destra(int n) {
  for(int i=0; i<n; i++) {
    for (int j=0; j<i; j++)
      cout << " ";
    cout << "*" << endl;
  }
}
