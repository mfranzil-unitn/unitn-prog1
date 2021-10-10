using namespace std;
#include <iostream> // chiamata a libreria

int main ()         // programma principale
{
  float cel,fahre;   // definizione di variabili reali
  
  cout << "Gradi Fahrenheit? : ";  // istruzione di output
  cin >> fahre;                    // istruzione di input
  cel = (fahre-32.0)*5.0/9.0;      // valutazione dell'espressione, 
                                   // assegnamento variabile.
  cout << "Gradi Celsius corrispondenti : " << cel << endl;  // istruzione di output
return 0;
}



