//  Example 3.9, page 62
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

int main()
{
  int n, count = 0, sum = 0;
  cout << "Enter positive integers.  Terminate input with 0:\n";
  for ( ; ; ) {
    cout << "\t" << count + 1 << ": ";
    cin >> n;
    if (n == 0) 
      break;
    ++count;
    sum += n;
  }
  cout << "The average of the " << count << " numbers is "
     << float(sum)/count << endl;
  return 0;
}
