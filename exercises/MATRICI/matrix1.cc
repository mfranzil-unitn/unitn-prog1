using namespace std;
#include <iostream>
#include <iomanip>

const int Dim1 = 2;
const int Dim2 = 3;
const int Dim3 = 4;

float A[Dim1][Dim2] = 
  {
    {1, 2, 3}, {4, 5, 6}
  };
  
float B[Dim2][Dim3] = 
  {
    {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}
  };    

float C[Dim1][Dim3];

float min_matrix (const float a[Dim1][Dim2])
{
   float min = a[0][0];
   int i, j;

   for (i=0; i < Dim1; i++)
      for (j=0; j < Dim2; j++)
	 if (a[i][j] < min) 
            min = a[i][j];
   return min;
}

void product  (const float a[Dim1][Dim2],
	       const float b[Dim2][Dim3],
	       float c[Dim1][Dim3])
{
    int i, j, k;
    for (i=0; i < Dim1 ; i++)
        for (j=0; j < Dim3 ; j++) {
           c[i][j]=0;
           for (k=0; k < Dim2; k++)
       	      c[i][j] += a[i][k]*b[k][j];
	}
}

void print_matrix (const float a[Dim1][Dim3])
{
  int i,j;
  
  for (i=0;i<Dim1;i++){
    for (j=0;j<Dim3;j++)
      cout << setw(4) << a[i][j];
    cout << endl;
  }
}

int main() 
{

  cout << "IL valore minimo di A e' " 
       << min_matrix(A) << endl;
  product(A,B,C);
  cout << "Il risultato del prodotto e'  " << endl;
  print_matrix(C);
return 0;
}


