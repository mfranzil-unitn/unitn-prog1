//  Example 7.1, page 187
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int main()
{
  float x = 44.44;
  cout << "x = " << x << endl;
  cout << "\t&x = " << &x << endl;  //  prints address of x
  float* p = &x;          //  p points to x
  cout << "\np = " << p << endl;
  cout << "\t&p = " << &p << endl;  //  prints address of p
  cout << "\t*p = " << *p << endl;  //  prints object p points to
  *p = 77.77;
  cout << "\np = " << p << endl;
  cout << "\t&p = " << &p << endl;
  cout << "\t*p = " << *p << endl;
  cout << "x = " << x << endl;
  cout << "\t&x = " << &x << endl;
  float* q = &x;          //  q points to x
  cout << "\nq = " << q << endl;
  cout << "\t&q = " << &q << endl;
  cout << "\t*q = " << *q << endl;
  cout << "x = " << x << endl;
  cout << "\t&x = " << &x << endl;
  return 0;
}
