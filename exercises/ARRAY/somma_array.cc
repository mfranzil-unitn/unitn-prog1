//  Example 5.6, page 131
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

const int size = 100;

void leggiArray(double [], int&);
void stampaArray(const double [], int);
void sommaArray(const double [], const double [], double [], int);


int main()
{
   int n1,n2;
   double a[size],b[size],c[size];

   leggiArray(a,n1);
   leggiArray(b,n2);
   if (n1!=n2) {
     cout << "Errore: array di dimensione diversa\n";
   }
   else {
     sommaArray(a,b,c,n1);
     stampaArray(c,n1);
   }
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

void stampaArray(const double a[], int n)
{
 	for (int i = 0; i < n; i++)
          cout << '\t' << i << ": " << a[i] << endl;
}

void sommaArray(const double a[], const double b[], double c[], int n) 
{
  for (int i=0;i<n;i++){
    c[i]=a[i]+b[i];
  }
}

