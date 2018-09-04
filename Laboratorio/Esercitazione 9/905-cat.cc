/*
  Partendo da "copiafile.cc" (vedere esempi di Sebastiani),
  implementare un programma che legge uno o piu' file di testo
  in input e li scrive, concatenandoli, sullo standard output.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
  fstream myin;
  char c;
  
  if (argc < 2) {
    cerr << "Introdurre almeno un argomento.\n";
    exit(EXIT_FAILURE);
  }
  
  for(int i = 1; i < argc; i++) {
    myin.open(argv[i], ios::in);
    if (myin.fail()) {
      cerr << "Il file " << argv[i] << " non esiste.\n";
    }
  
    while (myin.get(c)) {
      // In alternativa: cout << c;
      cout.put(c);
    }

    myin.close();
  }

  return 0;
}
