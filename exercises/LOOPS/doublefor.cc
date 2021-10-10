using namespace std;
#include <iostream>
#include <iomanip> // definisce setw()

// STAMPA TAVOLA PITAGORICA

int main () 
{
  for (int i=1;i<=12;i++) 
  {
    for (int j=1;j<=12;j++) 
    {
      cout << setw(4) << i*j;
    }
    cout << endl;
  }
return 0;
}

