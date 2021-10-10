using namespace std;
#include <iostream>

int main ()        
{

  float peso,valore,prezzo;
  
  cout << "Dammi il tuo peso in kg: ";
  cin >> peso;
  cout << "dammi il valore in euro: ";
  cin >> valore;
  prezzo = valore * peso * ((peso > 10) ? 0.9 : 1.0);
  cout << "Il prezzo e' " << prezzo << endl;

return 0;
}
