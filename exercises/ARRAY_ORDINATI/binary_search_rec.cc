using namespace std;
#include <iostream>

const int DIM = 100;
double a[DIM], target; 
int  found, loc, n;

int search(const double a[], int n, double target);
int search1(const double a[], int left, int right, double target);
void ReadArray(double [], int&);
void printArray(const double a[], int n);

int main()
{
  ReadArray(a,n);
  do {
    printArray(a,n);
    cout << "Target: ";  
    cin >> target;
    loc = search(a,n,target);
    if (loc>=0) 
      cout << target << " is at a[" << loc << "].\n\n";
    else 
      cout << target << " was not found.\n\n";
  } while (target >= 0.0);
  return 0;
}

//  Binary Search:
int search(const double a[], int n, double target) {
  return search1(a,0,n-1,target);
}

int search1(const double a[], int left, int right, double target)
{
  int res,pivot = (left + right)/2; 
  if (left > right)
    res = -1;
  else if (target == a[pivot]) 
    res = pivot;
  else if (target < a[pivot]) 
    res = search1(a,left,pivot-1,target);
  else // (target > a[pivot]) 
    res = search1(a,pivot+1,right,target);
  return res; 
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
