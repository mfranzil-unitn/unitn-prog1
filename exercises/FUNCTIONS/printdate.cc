//  Example 4.10, page 99
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

void printDate(int, int, int);

int main()
{
  int month, day, year;
  do {
    cout << "input month, day, year: ";
    cin >> month >> day >> year;
    printDate(month,day,year);
  } while (month > 0);
  return 0;
}

void printDate(int m, int d, int y)
{
  if (m < 1 || m > 12 || d < 1 || d > 31 || y < 0) {
    cout << "Error: parameter out of range.\n";
    return;
  }
  switch (m) {
    case  1:  cout << "January ";   break;
    case  2:  cout << "February ";  break;
    case  3:  cout << "March ";   break;
    case  4:  cout << "April ";   break;
    case  5:  cout << "May ";     break;
    case  6:  cout << "June ";    break;
    case  7:  cout << "July ";    break;
    case  8:  cout << "August ";  break;
    case  9:  cout << "September "; break;
    case 10:  cout << "October ";   break;
    case 11:  cout << "November ";  break;
    case 12:  cout << "December ";  break;
  }
  cout << d << ", " << y << endl;    
}
