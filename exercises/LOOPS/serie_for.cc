using namespace std;
#include <iostream>
#include <cmath>

//  calcola i primi N elementi della serie Somma_i 1/(2^i) 

int main () 
{
  int N;

  cout << "Numero massimo di iterazioni?: ";
  cin >> N;
  double somma;  
  somma=0.0;  
  for (int i=0;i<=N;i++) 
     somma+=1.0/(pow(2.0,i));
  cout << "La somma e' = " << somma << endl;
  
return 0;
}
