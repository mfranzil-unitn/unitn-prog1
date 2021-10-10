//  Example 5.7, page 132
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

//  Returns the sum of the first n elements of the specified array:

using namespace std;
#include <iostream>

double sum(double a[], int n)
{
  double s = 0.0;
  for (int i = 0; i < n; i++)
    s += a[i];
  return s;
}

void printArray(const double a[], int n)
{
  for (int i = 0; i < n; i++)
    cout << '\t' << i << ": " << a[i] << endl;
}

int main () 
{
  double a[5] = {0.0, 10.0, 20.0};
  cout << "La somma e` " << sum(a,5) << endl;
return 0;
}

  
