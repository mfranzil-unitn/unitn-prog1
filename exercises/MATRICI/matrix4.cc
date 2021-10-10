using namespace std;
#include <iostream>
#include <iomanip>

const int Dim = 10;

float A[Dim][Dim] = 
  {
    {1, 2, 3}, {4, 5, 6}
  };
  
float B[Dim][Dim] = 
  {
    {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}
  };    

float C[Dim][Dim];

float min_matrix (const float a[][],int d1,int d2)
{
   float min = a[0][0];
   int i, j;

   for (i=0; i < d1; i++)
   	for (j=0; j < d2; j++)
	    if (a[i][j] < min) min = a[i][j];
	return min;
}

void product  (const float a[][Dim],
	       const float b[][Dim],
	       float c[][Dim],
               int d1,int d2,int d3)
{
    int i, j, k;

    for (i=0; i < d1 ; i++)
        for (j=0; j < d3 ; j++) {
           c[i][j]=0;
           for (k=0; k < d2; k++)
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

int main() 
{

  cout << "IL valore minimo di A e' " 
       << min_matrix(A,2,3) << endl;
  product(A,B,C,2,3,4);
  cout << "Il risultato del prodotto e'  " << endl;
  print_matrix(C,2,4);
return 0;
}


