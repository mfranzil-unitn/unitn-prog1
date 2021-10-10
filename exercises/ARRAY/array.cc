//  Example 5.1, page 128
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int main()
{
  int a[4] = {1,2,3,4};
  int b[4] = {1,2,3,4};

   //a++; // ERRORE IN COMPILAZIONE
   //a=b; // ERRORE IN COMPILAZIONE
   // cin >> a; // ERRORE IN COMPILAZIONE

  cout << (a==b) << endl; // COMPILA, MA DA' FALSE
  cout << (a<b) << endl;  // COMPILA, MA IMPREVEDIBILE
  cout << (long) a << endl;      // COMPILA, MA IMPREVEDIBILE
  cout << (long) b << endl;      // COMPILA, MA IMPREVEDIBILE

  cout << (long) &a[0] << endl;  // INDIRIZZO DEL PRIMO ELEMENTO
}
