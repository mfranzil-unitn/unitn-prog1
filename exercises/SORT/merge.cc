using namespace std;
#include <iostream>

const int size = 100;

void leggiArray(double [], int&);
void stampaArray(const double [], int);
void mergeArray(const double [],int,const double [],int ,double []);

int main()
{
  int n1,n2;
   double a[size];
   double b[size];
   double c[2*size];
   
   leggiArray(a,n1);
   stampaArray(a,n1);
   leggiArray(b,n2);
   stampaArray(b,n2);
   mergeArray(a,n1,b,n2,c);
   cout << "L'array risultante e': \n ";
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
	}
}

void stampaArray(const double a[], int n)
{
  cout << endl;
  for (int i = 0; i < n; i++)
     cout << '\t' << i << ": " << a[i] << endl;
}

// merges a and b into c
void mergeArray(const double a[],int n1,const double b[],int n2,double c[]) 
{
  
  for (int i=0,j=0,k=0;k<n1+n2;k++) {
    if (j==n2 || (i<n1 && a[i]<b[j])) {
      c[k]=a[i];
      i++;
    }
    else   {
      c[k]=b[j];
      j++;
    }
  }
}
