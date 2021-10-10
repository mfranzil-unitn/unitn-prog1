//  Example 5.1, page 128
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int main()
{
  double a[4];
  cout << "Enter 4 real numbers:\n";
  for (int i = 1; i <= 4; i++) {
    cout << i << ": ";  
    cin >> a[i-1];
  }
  cout << "Here they are in reverse order:\n";
  for (int i = 3; i >= 0; i--)
    cout << "\ta[" << i << "] = " << a[i] << endl;
  return 0;
}
