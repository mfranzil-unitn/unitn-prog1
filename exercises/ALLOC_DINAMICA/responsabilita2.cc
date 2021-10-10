//  Example 6.12, page 168
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

void get(double*&, int&);
void print(double*, int);

int main()
{
  double* a;     // a is now simply an unallocated pointer
  int n;

  get(a, n);
  print(a, n);   // now a is an array of n doubles
  delete [] a;   // a is now simply an unallocated pointer

  get(a, n);
  print(a, n);   // now a is an array of n doubles
  delete [] a;   // a is now simply an unallocated pointer

  return 0;
}

void get(double*& a, int& n)
{
  cout << "Enter number of items: ";
  cin >> n;
  a = new double[n];
  cout << "Enter items, one per line:\n";
  for (int i = 0; i < n; i++) {
    cout << i+1 << ": ";
    cin >> a[i];
  }
}

void print(double* a, int n)
{
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;
}
