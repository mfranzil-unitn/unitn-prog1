using namespace std;
#include <iostream> 

int main ()         
{
  float cel,fahre;   
  char scelta;       

  cout << "Tipo di conversione? [c|f]: ";  
  cin >> scelta;                           

  while (scelta == 'c'||scelta == 'f') 
// CONDIZIONE PERMANENZA NEL CICLO
  {           // INIZIO CICLO
        
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

    cout << "Tipo di conversione? [c|f]: ";  
    cin >> scelta;                           
  } 
  
  cout << "Opzione errata" << endl;
  
return 0;
}


