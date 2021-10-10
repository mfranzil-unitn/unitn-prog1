using namespace std;
#include <iostream>

int main()
{
  const int dim=5;
  
  long double v[dim] = {0.0, 1.0, 2.0, 3.0, 4.0};


  
  cout << "Value = " << v <<  endl;

  cout << "size of v[i]: " << sizeof(v[0]) << endl;
  for(int i=0;i<dim;i++)
    cout << "value= " << v[i] << ", address = " << &v[i] << endl;
  return 0;
}
