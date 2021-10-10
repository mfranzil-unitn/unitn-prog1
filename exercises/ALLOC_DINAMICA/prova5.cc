using namespace std;
#include <iostream>
 
int main () 
{
  int * a;
  int n,i;
  cout << "quanti? " ;
  cin >> n;
  // non piu' ammesso 
  // in vecchi compilatori e' ammesso
    a = new int[n] = {1,2,3};
    //  a = new int[n];
  for (i=0;i<n;i++){
    cout << endl << i+1 << ": ";
    cout << a[i];
  }
  delete [] a;
  cout << endl << a[1] << endl;
}

