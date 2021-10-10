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

float min_matrix (const float a[Dim][Dim],int d1,int d2)
{
   float min = a[0][0];
   int i, j;

   for (i=0; i < d1; i++)
   	for (j=0; j < d2; j++)
	    if (a[i][j] < min) min = a[i][j];
	return min;
}

void product  (const float a[Dim][Dim],
	       const float b[Dim][Dim],
	       float c[Dim][Dim],
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

void print_matrix (const float a[Dim][Dim],int d1,int d3)
{
  int i,j;
  
  for (i=0;i<d1;i++){
    for (j=0;j<d3;j++)
      cout << setw(4) << a[i][j];
    cout << endl;
  }
}

void read_matrix (float a[Dim][Dim],int & d1,int & d3)
{
  int i,j;
  cout << "Dimensioni della matrice?: ";
  cin >> d1 >> d3;
  for (i=0;i<d1;i++){
    for (j=0;j<d3;j++) {
      cout << "elemento [" << i << "][" << j << "]: ";
      cin >> a[i][j];
    }
  }
}



int main() 
{
  int d1,d2,d3;
  cout << "IL valore minimo di A e' " 
       << min_matrix(A,2,3) << endl;
  product(A,B,C,2,3,4);
  cout << "Il risultato del prodotto e'  " << endl;
  print_matrix(C,2,4);
  read_matrix(C,d1,d2);
  print_matrix(C,d1,d2);


  return 0;
}


