//  Example 5.3, page 129
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

//Modificato da Roberto Sebastiani 

using namespace std;
#include <iostream>

int main()
{
  float x=100.0;
  float a[] = {22.2, 44.4, 66.6};
  float y=200.0;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  cout << "&x     = " << (long) &x << endl;
  cout << "&y     = " << (long) &y << endl;
  
  for (int i = 0; i < 4; i++)
    cout << "a[" << i << "] = " << a[i] << endl;
  //ERRORE: al quarto ciclo, accede ad un'area non ammessa
  cout << endl;
  for (int i = 1; i <= 4; i++)
    cout << "a[" << 3-i << "] = " << a[3-i] << endl;
  //ERRORE: al quarto ciclo, accede ad un'area non ammessa
  cout << endl;

  for (int i = 0; i < 4; i++)
    a[i]= i*22.2;
  //ERRORE: al quarto ciclo, modifica valori su un'area non ammessa
  cout << endl;
  for (int i = 1; i <= 4; i++)
    a[3-i]= (3-i)*22.2;
  //ERRORE: al quarto ciclo, modifica valori su un'area non ammessa
  cout << endl;
  
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  cout << "&x     = " << (long) &x << endl;
  cout << "&y     = " << (long) &y << endl;
  cout << endl;

  cout << "&a[-1] = " << (long) &a[-1] << endl;
  cout << "&a[0]  = " << (long) &a[0] << endl;
  cout << "&a[1]  = " << (long) &a[1] << endl;
  cout << "&a[2]  = " << (long) &a[2] << endl;
  cout << "&a[3]  = " << (long) &a[3] << endl;
  cout << endl;
  cout << "&a[4]  = " << (long) &a[10] << endl;
  cout << "&a[5]  = " << (long) &a[11] << endl;

  cout.flush();
  return 0;
}
