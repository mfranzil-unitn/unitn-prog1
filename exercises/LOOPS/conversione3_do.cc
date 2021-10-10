using namespace std;
#include <iostream> 

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
      cel = (fahre-32.0)*5.0/9.0;      
                                       
      cout << "Gradi Celsius corrispondenti : " << cel << endl;  
    }
    else if (scelta=='c') {                  
      cout << "Gradi Celsious? : ";  
      cin >> cel;                    
      fahre = cel*9.0/5.0 + 32.0;    
                                     
      cout << "Gradi Fahrenheit corrispondenti : " << fahre << endl;     
    }
    else                                    
      cout << "Opzione errata" << endl;

  } while (scelta == 'c'||scelta == 'f'); // CONDIZIONE PERMANENZA NEL CICLO
  
return 0;
}


