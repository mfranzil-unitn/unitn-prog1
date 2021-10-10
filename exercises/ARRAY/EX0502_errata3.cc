//  Example 5.2, page 129
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int main()
{
  float a[]={22.2, 44.4, 66.6 };
  float x=11.1;
  
  cout << "x= " << x << endl;
  a[3] = 88.8;
  cout << "x= " << x << endl;
  

  return 0;
}
