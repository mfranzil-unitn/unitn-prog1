using namespace std;
#include <iostream>


int main () 
{ 

  int v[2]={10,20};
  int * pv = v;
  
  cout << " *pv+1 = " <<   *pv+1
       << " *(pv+1) = " << *(pv+1)
       << " (*pv)+1 = " << (*pv)+1
       << endl;
  return 0;
}

