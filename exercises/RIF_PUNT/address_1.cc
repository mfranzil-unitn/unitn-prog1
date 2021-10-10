using namespace std;
#include <iostream>

int main()
{
  int l = 12;
  int m = 42;
  int n = 33;
  
  cout << "l = " << l << endl;    //  print the value of l
  cout << "m = " << m << endl;    //  print the value of m
  cout << "n = " << n << endl;    //  print the value of n
  cout << "&l = " << &l << endl;  //  print the address of l
  cout << "&m = " << &m << endl;  //  print the address of m
  cout << "&n = " << &n << endl;  //  print the address of n
  // cout << "&l = " << long(&l) << endl;  // print the address of l, decimal
  // cout << "&m = " << long(&m) << endl;  // print the address of m, decimal
  // cout << "&n = " << long(&n) << endl;  // print the address of n, decimal

  // cout << "&l = " << &(l*5) << endl;  //  errore!

  return 0;
}
