using namespace std;
#include <iostream> 

// FUNZIONE che converte Celsius -> Fahrenheit
float cel2fahre (float cel1) 
{
  return cel1*9.0/5.0 + 32.0; 
}

// FUNZIONE che converte Fahrenheit -> Celsius
float fahre2cel (float fahre1) 
{
  return (fahre1-32.0)*5.0/9.0; 
}

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


