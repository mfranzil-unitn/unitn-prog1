using namespace std;
#include <iostream>

const int DIM = 100;
double a[DIM], target ; 
int found, loc, n;

int search(const double a[], int n, double target);
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

//  Linear Search:
int search(const double a[], int n, double target)
{
  bool found;
  int location;
  for (found=false,location=0;
       !found && location < n;
       location++)
     found = (a[location] == target);
  return (found ? location-1 : -1);
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
