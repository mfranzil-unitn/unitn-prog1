using namespace std;
#include <iostream>

const int d1a = 2;
const int d2a = 3;


float ** read_matrix (int & d1,int & d2)
{
  int i,j;

  float ** res;
  cout << "prima dimensione: ";
  cin >> d1;
  cout << "seconda dimensione: ";
  cin >> d2;
  res = new float *[d1];
  for (i=0;i<d1;i++) {
    res[i] = new float[d2];
    for (j=0;j<d2;j++) {
      cout << "[" << i << "," << j << "] : ";
      cin >> res[i][j];
    }
  }
  return res;
}

void print_matrix_dim (float ** a,int d1,int d3)
{
  int i,j;
  cout << endl;
  for (i=0;i<d1;i++){
    for (j=0;j<d3;j++)
      cout << a[i][j] << " ";
    cout << endl;
  }
}

void print_matrix_sta (float a[][d2a],int d1,int d3)
{
  int i,j;
  cout << endl;
  for (i=0;i<d1;i++){
    for (j=0;j<d3;j++)
      cout << a[i][j] << " ";
    cout << endl;
  }
}


int main() 
{
  int d1b,d2b,d1c,d2c;
  float A[d1a][d2a] = {{1,2,3},{4,5,6}};
  float ** B;
  float ** C;
  
  B = read_matrix(d1b,d2b);
  // B = A; // errore
  //  print_matrix_dim (A,d1a,d2a); // non accetta array statici
  print_matrix_dim (B,d1b,d2b); 
  print_matrix_sta (A,d1a,d2a); 
  //print_matrix_sta (B,d1b,d2b); // non accetta array dinamici

}


