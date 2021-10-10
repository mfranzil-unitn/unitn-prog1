using namespace std;
#include <iostream>
#include "matrix.h"

// ------- FUNZIONE AUSILIARIA ------------- 
static matrix alloc_matrix (int  d1,int  d2)
{
  int i,j;

  matrix res;
  res = new float *[d1];
  for (i=0;i<d1;i++) {
    res[i] = new float[d2];
  }
  return res;
}

// ------- FUNZIONI ACCESSIBILI ------------- 

matrix read_matrix (int & d1,int & d2)
{
  int i,j;

  matrix res;
  cout << "prima dimensione: ";
  cin >> d1;
  cout << "seconda dimensione: ";
  cin >> d2;
  res = alloc_matrix(d1,d2);

  for (i=0;i<d1;i++) {
    for (j=0;j<d2;j++) {
      cout << "[" << i << "," << j << "] : ";
      cin >> res[i][j];
    }
  }
  return res;
}

void print_matrix (matrix a,int d1,int d3)
{
  int i,j;
  
  cout << endl;
  for (i=0;i<d1;i++){
    for (j=0;j<d3;j++)
      cout << a[i][j] << " ";
    cout << endl;
  }
  cout << endl;
}

matrix sum  (matrix a,matrix b,int d1,int d2)
{
    int i, j;
    matrix res;
    res = alloc_matrix(d1,d2);

    for (i=0; i < d1 ; i++){
        for (j=0; j < d2 ; j++) {
	  res[i][j] = a[i][j]+b[i][j];
	}
    }
    return res;
}

matrix diff  (matrix a,matrix b,int d1,int d2)
{
    int i, j;
    matrix res;
    res = alloc_matrix(d1,d2);

    for (i=0; i < d1 ; i++){
        for (j=0; j < d2 ; j++) {
	  res[i][j] = a[i][j]-b[i][j];
	}
    }
    return res;
}

matrix product  (matrix a,matrix b,int d1,int d2,int d3)
{
    int i, j, k;
    matrix res;
    res = alloc_matrix(d1,d3);

    for (i=0; i < d1 ; i++){
        for (j=0; j < d3 ; j++) {
           res[i][j]=0;
           for (k=0; k < d2; k++)
       	      res[i][j] += a[i][k]*b[k][j];
	}
    }
    return res;
}

matrix transpose  (matrix a,int d)
{
    int i, j;
    matrix res;
    res = alloc_matrix(d,d);

    for (i=0; i < d ; i++){
        for (j=0; j < d ; j++) {
	  res[i][j] = a[j][i];
	}
    }
    return res;
}

