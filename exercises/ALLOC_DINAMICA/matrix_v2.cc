using namespace std;
#include <iostream>

float ** alloc_matrix (int  d1,int  d2)
{
  int i,j;

  float ** res;
  res = new float *[d1];
  for (i=0;i<d1;i++) {
    res[i] = new float[d2];
  }
  return res;
}

float ** read_matrix (int & d1,int & d2)
{
  int i,j;

  float ** res;
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

void print_matrix (float ** a,int d1,int d3)
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

float ** sum  (float ** a,float ** b,int d1,int d2)
{
    int i, j;
    float ** res;
    res = alloc_matrix(d1,d2);

    for (i=0; i < d1 ; i++){
        for (j=0; j < d2 ; j++) {
	  res[i][j] = a[i][j]+b[i][j];
	}
    }
    return res;
}

float ** diff  (float ** a,float ** b,int d1,int d2)
{
    int i, j;
    float ** res;
    res = alloc_matrix(d1,d2);

    for (i=0; i < d1 ; i++){
        for (j=0; j < d2 ; j++) {
	  res[i][j] = a[i][j]-b[i][j];
	}
    }
    return res;
}

float ** product  (float ** a,float ** b,int d1,int d2,int d3)
{
    int i, j, k;
    float ** res;
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

float ** transpose  (float ** a,int d)
{
    int i, j;
    float ** res;
    res = alloc_matrix(d,d);

    for (i=0; i < d ; i++){
        for (j=0; j < d ; j++) {
	  res[i][j] = a[j][i];
	}
    }
    return res;
}




int main() 
{
  int d1a,d2a,d1b,d2b;
  float ** A;
  float ** B;
  float ** C;
  
  A = read_matrix(d1a,d2a);
  B = read_matrix(d1b,d2b);
  cout << "Matrice A:\n";
  print_matrix (A,d1a,d2a);
  cout << "Matrice B:\n";
  print_matrix (B,d1b,d2b);

  if (d1a==d1b && d2a==d2b) {
    C=sum (A,B,d1a,d2a);
    cout << "Matrice somma:\n";
    print_matrix (C,d1a,d2b);

    C=diff (A,B,d1a,d2a);
    cout << "Matrice differenza:\n";
    print_matrix (C,d1a,d2b);
  }
  
  if (d2a==d1b) {
     C = product (A,B,d1a,d2a,d2b);
     cout << "Matrice prodotto:\n";
     print_matrix (C,d1a,d2b);
  }

  if (d1a==d2a) {
     C = transpose (A,d1a);
     cout << "Matrice trasposta di A:\n";
     print_matrix (C,d1a,d2a);
  }
  
}


