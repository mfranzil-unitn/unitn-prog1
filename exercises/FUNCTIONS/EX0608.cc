//  Example 6.8, page 162
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

float v[4];


float& component(float* v, int k)
{ 
  return v[k-1];
}

int main()
{
  for (int k = 1; k <= 4; k++)
    component(v,k) = 1.0/k;
  for (int i = 0; i < 4; i++)
    cout << "v[" << i << "] = " << v[i] << endl;
  return 0;
}
