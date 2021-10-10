using namespace std;
#include <iostream>

int A[2][2] = {{1,2}, {3,4}};

int main () {
  cout << A << endl;
  cout << &(A[0]) << endl;
  

  cout << A[0] << endl;
  cout << A[1] << endl;
  cout << &(A[0][0]) << endl;

  cout << **A << endl;
}
