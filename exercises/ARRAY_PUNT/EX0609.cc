//  Example 6.9, page 163
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>


int main()
{ 
  const int size = 3;
  short a[size] = {22, 33, 44};
  cout << "a = " << a <<  endl; 
  cout << "sizeof(short) = " << sizeof(short) << endl;
  short* end = a + size;       // converts size to offset 6
  short sum = 0;
  for (short* p = a; p < end; p++) {
    sum += *p;
    cout << "\t p = " << p;
    cout << "\t *p = " << *p;
    cout << "\t sum = " << sum << endl;
  }
  cout << "end = " << end << endl;
  return 0;
}
