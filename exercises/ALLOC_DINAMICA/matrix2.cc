using namespace std;
#include <iostream>
#include <cstdlib>
#include <new>


void nomemory() 
{
  cerr << "Memoria esaurita: " 
       << "impossibile allocare " << endl;
  exit(0);
}


float ** alloc_matrix (int  d1,int  d2)
{
  int i,j;
  float ** res;
  res = new (nothrow) float *[d1];
  if (res == NULL)
    nomemory();
  for (i=0;i<d1;i++) {
    res[i] = new float[d2];
    if (res[i] == NULL) 
       nomemory();
  }
  return res;
}

void fill_matrix(float ** a,int  d1,int  d2)
{
  for (int i = 0;i<d1;i++)
     for (int j = 0;j<d2/1024;j++)
       a[i][j*1024]=0;
}

int main() 
{
  const int dim1=256;
  const int dim2=1024*1024;

  float ** A;
  
  for (int i=0;i<20;i++) {
    A = alloc_matrix(dim1,dim2);
    fill_matrix(A,dim1,dim2);
    cout << "allocata la " << i << "-esima matrice\n";
  }
}


