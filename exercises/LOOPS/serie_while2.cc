using namespace std;
#include <iostream>
#include <cmath>

//  calcola la serie Somma_i 1/(2^i) 
//  con terminazione con criterio di Cauchy 

int main () 
{
  double Eps=1.0e-4;
  cout << "Valore della precisione richiesta?: ";
  cin >> Eps;
  
  int i;
  double somma, ultimasomma;
  
  somma=1.0;  
  ultimasomma= 0.0;
  i = 1;

  while (fabs((somma-ultimasomma)/somma)>=Eps) 
  {
//cout << (somma-ultimasomma)/somma << ", somma: " << somma << endl;
    ultimasomma=somma;
    somma+=1/(pow(2.0,i));
    i++;
  }
  cout << "La somma e' = " << somma << endl;
  cout << "calcolata  dopo " << i-1 << " passi\n";
  
return 0;
}
