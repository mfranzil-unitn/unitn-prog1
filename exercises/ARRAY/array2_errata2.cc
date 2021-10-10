//  Example 5.2, page 129
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int main()
{
  const int size = 4;
  int a[size];
  int x=10;
  
  cout << "Enter " << size << " real numbers:\n";
  for (int i = 1; i <= size; i++) {
    cout << i << ": ";  
    cin >> a[i];
  }
  cout << "Here they are in reverse order:\n";
  for (int i = size; i > 0; i--)
    cout << "\ta[" << i << "] = " << a[i] << endl;
  cout << "x = " << x << endl;
  return 0;
}
