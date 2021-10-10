//  Example 5.13, page 136
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

// modificato da R. Sebastiani

using namespace std;
#include <iostream>

  int a[] = {22, 33, 44, 55, 66, 77, 88, 99};

//  Binary Search:
void search(int& found, int& location, int a[], int n, int target);

int main()
{
  int target, found, loc;
  do {
    cout << "Target: ";  
    cin >> target;
    search(found,loc,a,8,target);
    if (found) 
      cout << target << " is at a[" << loc << "].\n";
    else 
      cout << target << " was not found.\n";
  } while (target != 0);
  return 0;
}

void search(int& found, int& location, int a[], int n, int target)
{
  int left = 0, right = n-1;
  found = 0;
  while (!found && left <= right) {
    location = (left + right)/2;      //  the midpoint
    found = (a[location] == target);
    if (a[location] < target) 
      left = location + 1;
    else 
      right = location - 1;
  }
}
