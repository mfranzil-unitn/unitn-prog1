using namespace std;
#include <iostream>

int main()
{
  const int dim=5;
  
  int v[dim] = {0, 1, 2, 3, 4};

  cout << "size of v[i]: " << sizeof(v[0]) << endl;
  for(int i=0;i<dim;i++)
    cout << "value= " << v[i] << ", address = " << &v[i] << endl;
  return 0;
}
