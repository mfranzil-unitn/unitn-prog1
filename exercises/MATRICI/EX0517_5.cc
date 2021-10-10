//  Example 5.17, page 141
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>
#include <iomanip>

void read(int a[][5]);

void print(const int a[][5]);

int main()
{
  // ERRORE
  int a[3][] = {{1, 2, 3, 4, 5},
               {6, 7, 8, 9, 10},
               {11, 12, 13, 14, 15}};
  print(a);
  return 0;
}

void read(int a[][5])
{
  cout << "Enter 15 integers, 5 per row:\n";
  for (int i = 0; i < 3; i++) {
    cout << "Row " << i << ": ";
    for (int j = 0; j < 5; j++)
      cin >> a[i][j];
  }
}

void print(const int a[][5])
{
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++)
      cout << setw(4) << a[i][j];
    cout << endl;
  }
}
