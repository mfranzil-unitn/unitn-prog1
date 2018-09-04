//
// Stampare a video n asterischi in
// obliquo sinistro
// NOTE: non usare setw e non usare /t
//

#include <iostream> 
using namespace std;

int main()
{
  int numero;
  
  cout << "Inserisci il numero di asterischi da stampare: ";
  cin >> numero;

  for (int i=0;i<numero;i++)
    {
      for (int j=numero-1;i<j;j--)
	{
	  cout << " ";
	}
      cout << "*" << endl;
    }
  cout << endl;

  return (0);
}

