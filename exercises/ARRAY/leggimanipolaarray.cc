//  Example 5.6, page 131
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>

const int size = 100;

void leggiArray(double [], int&);
void stampaArray(const double [], int);
double norma1(const double [], int );
void sommaArray(const double [], const double [], double [], int);
void concatenaArray(const double [], const double [], double [], int, int );


int main()
{
   int n1,n2;
   double a[size],b[size],c[size],d[2*size];

   leggiArray(a,n1);
   stampaArray(a,n1);
   cout << "La norma 1 degli elementi di a e` " << norma1(a,n1) << endl;

   leggiArray(b,n2);
   stampaArray(b,n2);
   if (n1!=n2) {
     cout << "Errore: array di dimensione diversa\n";
   }
   else {
     cout << "somma degli array:" << endl;
     sommaArray(a,b,c,n1);
     stampaArray(c,n1);
   }
   concatenaArray(a,b,c,n1,n2);
   cout << "concatenazione degli array:" << endl;
   stampaArray(c,n1+n2);
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

double norma1(const double a[], int n)
{
  double s = 0.0;
  for (int i = 0; i < n; i++)
    s += a[i];
  return s;
}

void sommaArray(const double a[], const double b[], double c[], int n) 
{
  for (int i=0;i<n;i++){
    c[i]=a[i]+b[i];
  }
}

void concatenaArray(const double a[], const double b[], double c[], int n1, int n2) 
{
  for (int i=0;i<n1;i++)
    c[i]=a[i];
  for (int i=0;i<n2;i++)
    c[i+n1]=b[i];
}

