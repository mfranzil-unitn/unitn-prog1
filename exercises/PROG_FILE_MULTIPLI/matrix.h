#ifndef MATRIX_H
#define MATRIX_H

using namespace std;
#include <iostream>

typedef float** matrix;

matrix  read_matrix (int & d1,int & d2);
void print_matrix (matrix a,int d1,int d3);

matrix  sum  (matrix  a,matrix  b,int d1,int d2);
matrix  diff  (matrix  a,matrix  b,int d1,int d2);
matrix  product  (matrix  a,matrix  b,int d1,int d2,int d3);
matrix  transpose  (matrix  a,int d);

#endif
