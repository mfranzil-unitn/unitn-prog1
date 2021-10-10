using namespace std;
#include <iostream>

float ** read_matrix (int & d1,int & d2)
{

  float ** res;
  cout << "prima dimensione: ";
  cin >> d1;
  cout << "seconda dimensione: ";
  cin >> d2;
  res = new float *[d1];
  for (float **pi=res;pi<res+d1;pi++) {
    *pi = new float[d2];
    for (float *pj=*pi;pj<*pi+d2;pj++) {
      cout << "[" << pi-res << "," << pj-*pi << "] : ";
      cin >> *pj;
    }
  }
  return res;
}

void print_matrix (float **a,int d1,int d3)
{
  
  cout << endl;
  for (float **pi=a;pi<a+d1;pi++){
    for (float *pj=*pi;pj<*pi+d3;pj++)
      cout << *pj << " ";
    cout << endl;
  }
  cout << endl;
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

  /*
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
     C = symmetric (A,d1a);
     cout << "Matrice simmetrica di A:\n";
     print_matrix (C,d1a,d2a);
  }
  */
}


