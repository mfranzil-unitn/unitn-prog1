//  Example 4.20, page 110
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

void f();                
void g();                
int x = 11;              // this x is global

int main()
{                        // begin scope of main()
  cout << "In main(): x = " << x << endl;
  int x = 22;
  {                      // begin scope of internal block
  int x = 33;
  cout << "In block inside main(): x = " << x << endl;
  }                      // end scope of internal block
  cout << "In main(): x = " << x << endl;
  f();
  g();
  return 0;
}                        // end scope of main()

void f()
{                        // begin scope of f()
  int x = 44;
  cout << "In f(): x = " << x << endl;
}                        // end scope of f()

void g()
{                        // begin scope of g()
  cout << "In g(): x = " << x << endl;
}                        // end scope of g()
