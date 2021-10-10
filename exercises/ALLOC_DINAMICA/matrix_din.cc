using namespace std;
#include <iostream> 
#include <iomanip> 


void printarray (int * v, int dim) {
  for (int i=0;i<dim;i++) 
    cout << " " << setw(3) << v[i] << ", ";
  cout << endl;
}


int ** read_matrix (int & d1,int & d2)
{
  int i,j;

  int ** res;
  cout << "prima dimensione: ";
  cin >> d1;
  cout << "seconda dimensione: ";
  cin >> d2;
  res = new int *[d1];
  for (i=0;i<d1;i++) {
    res[i] = new int[d2];
    for (j=0;j<d2;j++) {
      cout << "[" << i << "," << j << "] : ";
      cin >> res[i][j];
    }
  }
  return res;
}

void print_matrix (int ** a,int d1,int d3)
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

int main () 
{
  int d1=2;
  int d2=3;
  
  int i,j;
  
  int ** mat;

  mat = read_matrix(d1,d2);

  cout << "mat: " << (long) mat << endl;
  cout << "*mat: " << (long) *mat << endl;
  cout << "mat[0]: " << (long) mat[0] << endl;
  cout << "mat[1]: " << (long) mat[1] << endl;

  printarray(mat[0],3);
  printarray(mat[1],3);

  print_matrix(mat,d1,d2);

  cout << "(*mat == mat[0]): " << (*mat == mat[0]) << endl;
  cout << "(mat == &mat[0]): " << (mat == &mat[0]) << endl;
  cout << endl;
  
  cout << "(*(mat+1) == mat[1]): " << (*(mat+1) == mat[1]) << endl;
  cout << "(mat+1 == &mat[1]): " << (mat+1 == &mat[1]) << endl;
  cout << endl;
  
  cout << "(**mat == mat[0][0]): " << (**mat == mat[0][0]) << endl;
  cout << "(*mat[0] == mat[0][0]): " << (*mat[0] == mat[0][0]) << endl;
  cout << endl;
  
  cout << "(*((*mat)+1) == mat[0][1]): " << (*((*mat)+1) == mat[0][1]) << endl;
  cout << "(*(mat[0]+1) == mat[0][1]): " << (*(mat[0]+1) == mat[0][1]) << endl;
  cout << "((mat[0]+1) == &mat[0][1]): " << ((mat[0]+1) == &mat[0][1]) << endl;
  cout << endl;
  
  cout << "(**(mat+1) == mat[1][0]): " << (**(mat+1) == mat[1][0]) << endl;
  cout << "(*mat[1] == mat[1][0]): " << (*mat[1] == mat[1][0]) << endl;
  cout << "(mat[1] == &mat[1][0]): " << (mat[1] == &mat[1][0]) << endl;
  cout << "(*(mat+1) == &mat[1][0]): " << (*(mat+1) == &mat[1][0]) << endl;
  cout << endl;
  
  cout << "(*(mat[1]+1) == mat[1][1]): " << (*(mat[1]+1) == mat[1][1]) << endl;
  cout << "(*((*(mat+1))+1) == mat[1][1]): " << ( *((*(mat+1))+1) == mat[1][1]) << endl;
  cout << "((mat[1]+1) == &mat[1][1]): " << ((mat[1]+1) == &mat[1][1]) << endl;
  cout << "(((*(mat+1))+1) == &mat[1][1]): " << (((*(mat+1))+1) == &mat[1][1]) << endl;
  
return 0;
}

  
    
    
      
