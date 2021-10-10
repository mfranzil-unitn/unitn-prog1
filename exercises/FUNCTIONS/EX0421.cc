//  Example 4.21, page 111
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int max(int, int);

int max(int, int, int);

double max(double, double);

int main()
{
  cout << max(99,77) << " " << max(55,66,33) << " "
       << max(3.4,7.2) << endl;
  return 0;
}

int max(int x, int y)
{
  return (x > y ? x : y);
}

//  Returns the maximum of the three given integers:
int max(int x, int y, int z)
{
  int m = (x > y ? x : y);
  return (z > m ? z : m);
}

//  Returns the maximum of the two given real numbers:
double max(double x, double y)
{
  return (x > y ? x : y);
}
