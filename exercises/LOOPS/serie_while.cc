using namespace std;
#include <iostream>
#include <cmath>

//  calcola i primi N elementi della serie Somma_i 1/(2^i) 

int main () 
{
  int N;
  cout << "Numero massimo di iterazioni?: ";
  cin >> N;
  int i;
  double somma;
  somma=0.0;  
  i = 0;
  while (i<=N)
  {
   somma+=1.0/(pow(2.0,i));
    i++;
  }
  cout << "La somma e' = " << somma << endl;
  
return 0;
}
