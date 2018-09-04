//
// Acquisire da tastiera un carattere e  
// stampare a video la sua codifica ASCII.
//

#include <iostream> 
using namespace std;

int main()
{
  char carattere;
  int codifica;
  
  cout << "Inserisci un carattere: ";
  cin >> carattere;

  codifica=carattere;
  
  cout << codifica << endl;

  return (0);
}

