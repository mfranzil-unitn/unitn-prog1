//  Example 5.17, page 141
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996
// Modificato da Roberto Sebastiani

using namespace std;
#include <iostream>
#include <iomanip>

const int DIM1 = 3;
const int DIM2 = 5;

void read(int a[][DIM2]);

void print(const int a[][DIM2]);

int main()
{
  int a[DIM1][DIM2] = {{1, 2, 3},
                       {}};

  print(a);
  return 0;
}

void print(const int a[][DIM2]) 
{
  for (int i = 0; i < DIM1; i++) {
    for (int j = 0; j < DIM2; j++)
      cout << " " << setw(4)  << a[i][j];
    cout << endl;
  }
}
