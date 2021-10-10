//  Example 4.5, page 94
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

//  Returns the larger of the two given integers:
int max(int x, int y)
{
  if (x < y) return y;
  else return x;
}

int main()
{
  int m, n;
  do {
    cin >> m >> n;
    cout << max(m,n) << endl;
  } while (m != 0);
  return 0;
}
