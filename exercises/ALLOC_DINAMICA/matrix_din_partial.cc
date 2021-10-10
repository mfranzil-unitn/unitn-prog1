using namespace std;
#include <iostream> 
#include <iomanip> 

void printarray (int * v, int dim) {
  for (int i=0;i<dim;i++) 
    cout << " " << setw(3) << v[i] << ", ";
  cout << endl;
}

void read_matrix (int a[][3],int d1,int d3)
{
  int i,j;
  
  cout << endl;
  for (i=0;i<d1;i++){
    for (j=0;j<d3;j++) {
      cout << "a[" << i << "][" << j << "]? " ;
      cin >> a[i][j];
    }
    cout << endl;
  }
  cout << endl;
}



void print_matrix (int a[][3],int d1,int d3)
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
  
  typedef int  array3 [3];  // array3 sinonimo di array di tre interi
  array3 * mat = new int[d1][3]; 
  //  int (*mat)[3] = new int[d1][3]; // alternativa diretta senza "typedef"
  read_matrix(mat,d1,d2);  

  cout << "mat: " << mat << endl;
  cout << "*mat: " << *mat << endl;
  cout << "mat[0]: " << mat[0] << endl;
  cout << "mat[1]: " << mat[1] << endl;

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

  
    
    
      
