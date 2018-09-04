//
// Acquisita da tastiera una data in questo  
// formato GGMMAAAA, estrarre in tre variabili
// distinte il valore del giorno, mese e anno
//

#include <iostream> 
using namespace std;
void estrai(int,int,int&,int&);

int main()
{
  int num,anno,mese,giorno;
  
  cout << "Inserisci la data: ";
  cin >> num;
  estrai(num,anno,mese,giorno);
  cout << "Anno: "<< anno;
  cout << " mese: " << mese;
  cout << " giorno: "<< giorno << endl;
  return (0);
}

void estrai(int num,int anno, int& mese,int& giorno)
{
  anno=num%10000;
  mese=num/10000%100;
  giorno=num/1000000;
}
