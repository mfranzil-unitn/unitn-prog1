using namespace std;
#include <iostream>

const int size = 100;

void leggiArray(double [], int&);
void stampaArray(const double [], int);
void concatenaArray(const double a[], const double b[], double c[], int n1, int n2);

double a[size],b[size],c[2*size];
int n1,n2;

int main()
{


   leggiArray(a,n1);
   leggiArray(b,n2);
   concatenaArray(a,b,c,n1,n2);
   stampaArray(c,n1+n2);
return 0;
}

void leggiArray(double a[], int& n)
{
	cout << "Dimensione array?: ";
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

void concatenaArray(const double a[], const double b[], double c[], int n1, int n2) 
{
  for (int i=0;i<n1;i++)
    c[i]=a[i];
  for (int i=0;i<n2;i++)
    c[i+n1]=b[i];
}

