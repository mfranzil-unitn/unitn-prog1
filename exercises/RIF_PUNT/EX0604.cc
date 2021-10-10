//  Example 6.4, page 159
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

main()
{
	int n = 33;
	int* p = &n;  //  p holds the address of n
	cout << "n = " << n << ", &n = " << &n << ", p = " << p << endl;
	cout << "&p = " << &p << endl;
return 0;
}

