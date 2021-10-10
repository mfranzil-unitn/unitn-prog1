//  Example 5.6, page 131
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

const int size = 100;

void leggiArray(double [], int&);
void stampaArray(double [], int);

int main()
{
   int n;
   double b[size];
   leggiArray(b,n);
   stampaArray(b,n);
   return 0;
}

void leggiArray(double a[], int& n)
{
	cout << "Dimension array?: ";
        cin >> n;
	
	for (int i = 0; i < n; i++) {
        cout << i << ": ";  
		cin >> a[i];
	};
}

void stampaArray(double a[], int n)
{
 	for (int i = 0; i < n; i++)
          cout << '\t' << i << ": " << a[i] << endl;
}
