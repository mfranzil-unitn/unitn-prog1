#include <iostream> 
using namespace std;

int main()
{
  int ore,minuti,secondi,tot
    cout << "Inserisci il numero totale dei secondi dell'esperimento:\n ";
    cin >> tot;
      if(tot<0)
      {
	tot*=-1;
      };
      ore=tot/3600;
      minuti=((tot%3600)/60);
      secondi=((tot%3600)%60);
      cout << "Il tuo esperimento è durato " << ore << " ore, " << minuti << " minuti e " << secondi << " secondi!\n";
      
}

