using namespace std;
#include <iostream>

const int size = 100;

void ReadArray(double [], int&);
void printArray(const double [], int);

int main()
{
  int n;
  double b[size];
  ReadArray(b,n);
  cout << "Il vettore ha " << n << " elementi:\n";
  printArray(b,n);
  return 0;
}

void ReadArray(double a[], int& n)
{
  cout << "Quanti elementi?: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "a[" << i << "]: ";  
    cin >> a[i];
  };
}

void printArray(const double a[], int n)
{
   for (int i = 0; i < n; i++)
     cout << '\t' << "a[" << i << "]: " << a[i] << endl;
}
