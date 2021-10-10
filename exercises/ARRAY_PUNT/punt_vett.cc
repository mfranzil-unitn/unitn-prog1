using namespace std;
#include <iostream>


int main () 
{
  const int dim = 4;
  int v[dim] = {10,20,30,40};
  cout << " v = " << (long) v << endl;
  for (int i=0;i<dim;i++) 
    cout << " i = " << i << 
            ",&v[i] = " << (long) &v[i] << 
            ",v+i = " << (long) (v+i) << 
            ",v[i] = " << v[i] << 
            ",*(v+i) = " << *(v+i) << endl;
  return 0;
}

