//
// Scrivere "Hello" a video fino a quando 
// l'utente lo vuole
//

#include <iostream> 
using namespace std;

int main()
{
  char risposta='y';
  
  while (risposta=='y')
    {
      cout << "Hello" << endl;
      cout << "Vuoi continuare? [y/n] ";
      cin >> risposta;
    }
  return (0);
}

