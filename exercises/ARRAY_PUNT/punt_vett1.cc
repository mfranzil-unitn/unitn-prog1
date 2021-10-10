using namespace std;
#include <iostream>

int main () 
{
  const int dim = 4;
  int v[dim] = {10,20,30,40};
  int *pv = v;

  // scansione tramite puntatore
  for (int i=0;i<dim;i++,pv++) 
    cout << " i = " << i << 
            ",&v[i] = " <<  (long) &v[i] << 
            ",pv = " <<  (long) pv << 
            ",v[i] = " << v[i] << 
            ",*pv = " << *pv << endl;

  cout << "dim = " << dim << ", pv-v = " << pv - v << endl;
  return 0;
}
