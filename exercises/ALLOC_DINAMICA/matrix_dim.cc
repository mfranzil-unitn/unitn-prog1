using namespace std;
#include <iostream> 

int istrue(int v) 
{
  return v;
}


int main () 
{
  const int d1=2;
  const int d2=3;
  
  int i,j;
  int mat[d1][d2] = {{1,2,3},{4,5,6}};
  
  cout << "mat: " << mat << endl;
  cout << "*mat: " << *mat << endl;
  cout << "mat[0]: " << mat[0] << endl;
  cout << "mat[1]: " << mat[1] << endl;
  for (i=0;i<d1;i++) {
    for (j=0;j<d2;j++) {
      cout << "mat[" << i << "," << j << "]= " << mat[i][j] << endl;
      cout << "&mat[" << i << "," << j << "]= " << &mat[i][j] << endl;
    }}
  cout << endl;


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

  
    
    
      
