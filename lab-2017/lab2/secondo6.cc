#include <iostream> 
using namespace std;

int main()
{
  double a,b,c,d;
    cout << "Inserisci il numero delle ore dell'esperimento:\n ";
    cin >> a;
    cout << "Bene, adesso dimmi quanti minuti è durato l'esperimento:\n ";
    cin >> b;
    cout << "Perfetto, ora raccontami il numero di secondi:\n ";
    cin >> c;
    a*=3600;
    b*=60;
    d=(a+b+c);
    if(d<0)
      {
	d*=-1;
      };
    cout << "Il tuo esperimento è durato ben " << d << " secondi!\n";
      
}

