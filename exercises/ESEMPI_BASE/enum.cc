using namespace std;
#include <iostream>

int main ()        
{

  enum Giorno {LUN,MAR,MER,GIO,VEN,SAB,DOM}; 
  Giorno oggi = LUN; 
  //oggi = 3; //ERRORE! 
  cout << "oggi = " << oggi << endl;
  
  enum boolean { FALSE, TRUE}; 
  boolean X = FALSE; 

  cout << "X = " << X << endl;

  enum colore {ROSSO=10, GIALLO=15, BLU=20}; 
  colore sfondo= GIALLO, testo= BLU; 

  // ERRORE!
  // sfondo = 10;
   cout << "sfondo = " << sfondo << endl;
   cout << "testo = " << testo << endl;
  
return 0;
}
