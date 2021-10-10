//  Example 5.12, page 135
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

// modificato da R. Sebastiani

using namespace std;
#include <iostream>

void print(float [], int);
void sort(float [], int);
void swap(float& , float& );
void leggiArray(float a[], int& n);


float a[8];

int main()
{
  int n;
  
  leggiArray(a,n);
  print(a, n);
  sort(a, n);
  print(a, n);
  return 0;
}

void print(float a[], int n)
{
  for (int i = 0; i < n-1; i++) {
    cout << a[i] << ", ";
    if ((i+1)%16 == 0) cout << endl;
  }
  cout << a[n-1] << endl;
}


void leggiArray(float a[], int& n)
{
	cout << "Dimensione array?: ";
        cin >> n;
	
	for (int i = 0; i < n; i++) {
        cout << i << ": ";  
		cin >> a[i];
	};
}

// Bubble Sort:
void sort(float a[], int n)
{
  for (int i = n-1; i > 0; i--)
    for (int j = 0; j < i; j++)
      if (a[j] > a[j+1]) 
         swap(a[j],a[j+1]);
}

void swap(float& x, float& y)
{
  float t=x;
  x=y;
  y=t;
}

