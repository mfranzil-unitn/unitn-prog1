using namespace std;
#include <iostream>
#include <cmath>

//  calcola la serie Somma_i 1/(2^i) 
//  con terminazione con criterio di Cauchy 

int main () 
{
  double Eps=1.0e-3;
  cout << "Valore della precisione richiesta?: ";
  cin >> Eps;
  int i;
  double somma, ultimasomma;  
  somma=1.0;  
  ultimasomma= 0.0;
  for (i=1;fabs((somma-ultimasomma))>=fabs(Eps*somma);i++)
  {
    ultimasomma=somma;
    somma+=1.0/(pow(2.0,i));
  }
  cout << "La somma e' = " << somma << endl;
  cout << "calcolata  dopo " << i-1 << " passi\n";
  
return 0;
}
