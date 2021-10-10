//  Example 5.3, page 129
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

//Modificato da Roberto Sebastiani 

using namespace std;
#include <iostream>

int main()
{
  double a[] = {22.2, 44.4, 66.6, 88.8}; // dimensione implicita
  for (int i = 0; i < 4; i++)
    cout << "a[" << i << "] = " << a[i] << endl;
  return 0;
}
