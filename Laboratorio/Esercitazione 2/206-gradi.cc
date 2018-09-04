//
// Dato un intero che rappresenta
// la temperatura in gradi F
// convertirlo in gradi C
// C=(F-32)/1.8
//

#include <iostream> 
using namespace std;

int main()
{
  int gradi_f;
  double gradi_c;

  cout << "Inserisci i gradi F: ";
  cin >> gradi_f;
  
  gradi_c=(gradi_f-32)/1.8;

  cout << gradi_c << endl;
  
  return (0);
}

