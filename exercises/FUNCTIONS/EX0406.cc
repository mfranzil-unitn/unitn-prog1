//  Example 4.6, page 95
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int max(int, int);

//  Test driver for the max function:
int main()
{
  int m, n;
  do {
    cin >> m >> n;
    cout << max(m,n) << endl;
  } while (m != 0);
  return 0;
}

//  Returns the larger of the two given integers:
int max(int x, int y)
{
  if (x < y) return y;
  else return x;
}
