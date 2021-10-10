using namespace std;
#include <iostream>
#include "matrix.h"



int main() 
{
  int d1a,d2a,d1b,d2b;
  matrix  A;
  matrix  B;
  matrix  C;
  
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


