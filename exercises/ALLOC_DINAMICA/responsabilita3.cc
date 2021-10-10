
using namespace std;
#include <iostream>

void get(double*&, int&);
void print(double*, int);

int main()
{
  double* a;     
  int n;

  get(a, n);
  print(a, n);  
  //  print(a, n);   

  get(a, n);
  print(a, n);   

  return 0;
}

void get(double*& a, int& n)
{
  cout << "Enter number of items: ";
  cin >> n;
  a = new double[n];
  cout << "Enter items, one per line:\n";
  for (int i = 0; i < n; i++) {
    cout << i+1 << ": ";
    cin >> a[i];
  }
}

void print(double* a, int n)
{
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;
  delete [] a;   // 
}
