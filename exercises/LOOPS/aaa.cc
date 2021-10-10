using namespace std;
#include <iostream>
#include <iomanip> // definisce setw()

// STAMPA TAVOLA PITAGORICA

int main () 
{ 
  int m,n;
  cout << "dammi m e n ";
  cin >> m >> n;
  
  for (int i=1;i<=m;i++) 
  {
    for (int j=1;j<=n;j++) 
    {
      cout << setw(4) << i*j;
    }
    cout << endl;
  }
return 0;
}

