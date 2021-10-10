using namespace std;
#include <iostream>
#include <iomanip>

const int Dim = 10;

void read_matrix(float a[][Dim],int m, int n);
float min_matrix (const float a[][Dim],int d1,int d2);
float max_matrix (const float a[][Dim],int d1,int d2);
void sum  (const float a[][Dim],const float b[][Dim],float c[][Dim],int d1,int d2);
void diff (const float a[][Dim],const float b[][Dim],float c[][Dim],int d1,int d2);
void product  (const float a[][Dim],const float b[][Dim],float c[][Dim],int d1,int d2,int d3);
void print_matrix (const float a[][Dim],int d1,int d3);


float A[Dim][Dim] = 
  {
    {1, 2, 3}, {4, 5, 6}
  };
  
float B[Dim][Dim] = 
  {
    {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}
  };    

float C[Dim][Dim];


int main() 
{
  int na,nb,nc,ma,mb,mc;
  cout << "Dimensioni della prima matrice? ";
  cin >> na >> ma;
  cout << "Dimensioni della seconda matrice? ";
  cin >> nb >> mb;
  read_matrix(A,na,ma);
  read_matrix(B,nb,mb);
  if (na==nb&&ma==nb) {
    sum(A,B,C,na,nb);
    cout << "Somma di A e B: " << endl;
    print_matrix(C,na,ma);
    diff(A,B,C,na,nb);
    cout << "Differenza di A e B: " << endl;
    print_matrix(C,na,ma);
  }
  if (ma==nb){
    product(A,B,C,na,ma,mb);
    cout << "Prodotto di A e B: " << endl;
    print_matrix(C,na,mb);
  }
  cout << "Il valore minimo di A e' " 
       << min_matrix(A,na,ma) << endl;
  cout << "Il valore massimo di A e' " 
       << max_matrix(A,na,ma) << endl;
return 0;
}


void read_matrix(float a[][Dim],int m, int n)
{
  cout << "Enter " << n*m << " integers, " << n << " per row:\n";
  for (int i = 0; i < n; i++) {
    cout << "Row " << i << ": ";
    for (int j = 0; j < m; j++)
      cin >> a[i][j];
  }
}

float min_matrix (const float a[][Dim],int d1,int d2)
{
   float min = a[0][0];
   int i, j;

   for (i=0; i < d1; i++)
   	for (j=0; j < d2; j++)
	    if (a[i][j] < min) min = a[i][j];
	return min;
}

float max_matrix (const float a[][Dim],int d1,int d2)
{
   float max = a[0][0];
   int i, j;
  for (i=0; i < d1; i++)
   	for (j=0; j < d2; j++)
	    if (a[i][j] > max) 
               max = a[i][j];
	return max;
}

void sum  (const float a[][Dim],
	   const float b[][Dim],
	   float c[][Dim],
           int d1,int d2)
{
    for (int i=0; i < d1 ; i++)
       for (int j=0; j < d2 ; j++) {
       	   c[i][j] += a[i][j]+b[i][j];
	}
}

void diff (const float a[][Dim],
	   const float b[][Dim],
	   float c[][Dim],
           int d1,int d2)
{
    for (int i=0; i < d1 ; i++)
        for (int j=0; j < d2 ; j++) {
       	      c[i][j] += a[i][j]-b[i][j];
	}
}

void product  (const float a[][Dim],
	       const float b[][Dim],
	       float c[][Dim],
               int d1,int d2,int d3)
{
    for (int i=0; i < d1 ; i++)
        for (int j=0; j < d3 ; j++) {
           c[i][j]=0;
           for (int k=0; k < d2; k++)
       	      c[i][j] += a[i][k]*b[k][j];
	}
}

void print_matrix (const float a[][Dim],int d1,int d3)
{
  int i,j;
  
  for (i=0;i<d1;i++){
    for (j=0;j<d3;j++)
      cout << setw(4) << a[i][j];
    cout << endl;
  }
}

