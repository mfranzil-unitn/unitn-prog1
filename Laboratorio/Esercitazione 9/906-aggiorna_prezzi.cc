/*
  Scrivere un programma che legge una sequenza di prezzi
  da un file (di testo) in ingresso, li modifica secondo
  una certa scontistica, e poi li salva in un file di
  output (di testo). Si assuma che tutti i numeri in ingresso
  siano interi.
  Regola:
  n < 50 => moltiplica per 1.08
  50 <= n < 100 => moltiplica per 1.05
  n > 100 => moltiplica per 1.02

  Dati di esempio:

  12 34 56 7
  8 7 6
  9 15
  33 100 2 900
*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char * argv[]) 
{
  fstream myin, myout;
  int n;
  
  if (argc != 3) {
    cerr << "Sintassi: ./a.out <in> <out>." << endl;
    exit(EXIT_FAILURE);
  }
  
  myin.open(argv[1], ios::in);
  if (myin.fail()) {
    cerr << "Il file " << argv[1] << " non esiste.\n";
    exit(EXIT_FAILURE);
  }
  
  myout.open(argv[2], ios::out);

  myin >> n;
  while (!myin.eof()) {
    if(n < 50) {
      myout << n * 1.08;
    } else if(n >= 50 && n < 100) {
      myout << n * 1.05;
    } else {
      myout << n * 1.02;
    }
    myout << " ";
    myin >> n;
  }

  myout.close();
  myin.close();

  return 0;
}
