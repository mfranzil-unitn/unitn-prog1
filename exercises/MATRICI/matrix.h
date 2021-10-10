#ifndef _MATRIX

void read_matrix(float a[][Dim],int m, int n);
float min_matrix (const float a[][Dim],int d1,int d2);
float max_matrix (const float a[][Dim],int d1,int d2);
void sum  (const float a[][Dim],const float b[][Dim],float c[][Dim],int d1,int d2);
void diff (const float a[][Dim],const float b[][Dim],float c[][Dim],int d1,int d2);
void product  (const float a[][Dim],const float b[][Dim],float c[][Dim],int d1,int d2,int d3);
void print_matrix (const float a[][Dim],int d1,int d3);

static int Dim = 20;

#define _MATRIX
#endif
