using namespace std;
#include <iostream> 

int *times(int a[10], int k) {
  int b[10];
  for (int i=0; i<10; i++)
    b[i]=a[i]*k;
  return b; //errore b locale!
}


int main () 
{
  int v[10] = {1,2,3,4,5,6,7,8,9,10};
  v = times(v,4);

  return 0;
}

