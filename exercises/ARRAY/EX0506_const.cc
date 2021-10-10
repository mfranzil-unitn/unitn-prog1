//  Example 5.6, page 131
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

// modificato da R. Sebastiani

using namespace std;
#include <iostream>

const int size = 100;

void getArray(double [], int&);
void printArray(const double [], int);

int main()
{
	int n;
        double b[size];
	getArray(b,n);
	cout << "The array has " << n << " elements.\nThey are:\n";
	printArray(b,n);
  return 0;
}

void getArray(double a[], int& n)
{
	n = 0;
	cout << "Enter data.  Terminate with 0:\n";
	for (n = 0; n < size; n++) {
        cout << n << ": ";  
		cin >> a[n];
		if (a[n] == 0) break;
	};
}

void printArray(const double a[], int n)
{
   for (int i = 0; i < n; i++)
      cout << '\t' << i << ": " << a[i] << endl;
   // a[1]=2; // ERRORE
}
