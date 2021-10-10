//  Example 5.17, page 141
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>
#include <iomanip>


int main()
{

  int *  MAT1 = new int[2][3]; // ERRORE
  int ** MAT2 = new int[2][3]; // ERRORE

  cout << "&MAT1:       " << (long) &MAT1 << endl;
  cout << "MAT1:        " << (long) MAT1 << endl;
  cout << "&MAT1[0][0]: " << (long) &MAT1[0][0] << endl;
  cout << "MAT1[0]:     " << (long) MAT1[0] << endl;
  cout << "MAT1[1]:     " << (long) MAT1[1] << endl;
  cout << "&MAT1[1][0]: " << (long) &MAT1[1][0] << endl;
  return 0;
}
