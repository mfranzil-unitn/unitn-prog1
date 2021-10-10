//  Example 3.6, page 60
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int main()
{
  int n, min, max;
  cout << "Enter positive integers.  Terminate input with 0:\n";
  cin >> n;
  for (min = max = n; n > 0; ) {
    if (n < min) 
       min = n;        // min and max are the smallest
    else if (n > max)  // and largest of the n that
       max = n;        // have been read so far
    cin >> n;          
  }
  cout << "min = " << min << " and max = " << max << endl;
  return 0;
}
