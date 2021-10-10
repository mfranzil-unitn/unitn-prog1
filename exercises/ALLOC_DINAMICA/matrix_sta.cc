//  Example 5.17, page 141
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>
#include <iomanip>


int main()
{
  int MAT[2][3] = {{1, 2, 3},
                   {4, 5, 6}};

  cout << "&MAT:       " << (long) &MAT << endl;
  cout << "MAT:        " << (long) MAT << endl;
  cout << "&MAT[0][0]: " << (long) &MAT[0][0] << endl;
  cout << "MAT[0]:     " << (long) MAT[0] << endl;
  cout << "MAT[1]:     " << (long) MAT[1] << endl;
  cout << "&MAT[1][0]: " << (long) &MAT[1][0] << endl;


  return 0;
}

