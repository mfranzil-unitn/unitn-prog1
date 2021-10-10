using namespace std;
#include <iostream> 

int main ()         
{
  float cel,fahre;   
  char scelta;       // definizione di variabile carattere
  
  cout << "Tipo di conversione? [c|f]: ";  // istruzione di output
  cin >> scelta;                           // istruzione di input
  
  if (scelta=='f') {                       // prima opzione
    cout << "Gradi Fahrenheit? : ";  
    cin >> fahre;                    
    cel = (fahre-32.0)*5.0/9.0;      
                                     
    cout << "Gradi Celsius corrispondenti : " << cel << endl;  
  }
  else if (scelta=='c') {                  // seconda opzione
    cout << "Gradi Celsious? : ";  
    cin >> cel;                    
    fahre = cel*9.0/5.0 + 32.0;    
                                   
    cout << "Gradi Fahrenheit corrispondenti : " << fahre << endl;     
  }
  else                                    // terza opzione
    cout << "Opzione errata" << endl;
return 0;
}


