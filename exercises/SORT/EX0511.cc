//  Example 5.11, page 134
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

// modificato da R. Sebastiani

using namespace std;
#include <iostream>

int a[] = {55, 22, 99, 66, 44, 88, 33, 77}, target, found, loc;

void search(int& found, int& location, const int a[], int n, int target);

int main()
{
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

//  Linear Search:
void search(int& found, int& location, const int a[], int n, int target)
{
  found = 0;
  location = 0;
  while (!found && location < n) {
    found = (a[location] == target);
    location++;
  }
  location--;
}
