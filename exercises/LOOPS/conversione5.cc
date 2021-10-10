using namespace std;
#include <iostream> 
#include "fahre_cel.h" 


int main ()         
{
  float cel,fahre;   
  char scelta;       

  do {           // INIZIO CICLO
    
    cout << "Tipo di conversione? [c|f]: ";  
    cin >> scelta;                           
    
    if (scelta=='f') {                       
      cout << "Gradi Fahrenheit? : ";  
      cin >> fahre;                    
      cel = fahre2cel(fahre);      
      cout << "Gradi Celsius corrispondenti : " << cel << endl;  
    }
    else if (scelta=='c') {                  
      cout << "Gradi Celsious? : ";  
      cin >> cel;                    
      fahre = cel2fahre(cel);
      cout << "Gradi Fahrenheit corrispondenti : " << fahre << endl;     
    }
    else                                    
      cout << "Opzione errata" << endl;

  } while (scelta == 'c'||scelta == 'f'); // CONDIZIONE PERMANENZA NEL CICLO
  
return 0;
}


