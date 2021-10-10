using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

int main (int argc, char * argv[]) 
{
  const float euro = 1936.27;

  fstream myin,myout;
  int value;
  float liravalue;
  
  if (argc!=3) {
    cerr << "Usage: ./a.out <sourcefile> <targetfile>\n";
    exit(0);
  }
  
  myin.open(argv[1],ios::in);
  if (myin.fail()) {
     cerr << "Il file " << argv[1] << " non esiste\n";
     exit(0);
  }
//   ANALOGO:
//   if (myin==NULL) {
//      cerr << "Il file " << argv[1] << " non esiste\n";
//      exit(0);
//   }
  
  myout.open(argv[2],ios::out);
  
  // NOTA: "!myin.eof" va usato sempre *DOPO* almeno un'operazione di lettura
  // Inoltre richiede sempre un separatore dopo l'ultimo elemento letto
  // altrimenti meglio usare !myin.fail()
  myin >> value;
  while (!myin.fail()) {
    liravalue = euro*value;
    myout << value << " " << fixed << setw(8) << setprecision(0) 
          << liravalue << endl;
    myin >> value;
  }
  myin.close();
  myout.close();
  return 0;
}
