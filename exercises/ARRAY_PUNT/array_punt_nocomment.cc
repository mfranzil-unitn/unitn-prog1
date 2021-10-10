using namespace std;
#include <iostream>


int main () 
{
  const int dim=10;
  int v1[dim] = {0,1,2,3,4,5,6,7,8,9};
  int v2[dim] = {0,2,4,6,8,10,12,14,16,18};
  int *p1=v1;
  int *p2=v2;

  p1+=3;
  p2+=3;

  p2=p1+4;
  p1++;

 *p1=20;
 *p2=40;
  
 p1 =&v2[4];
 p2 =&v2[7];

 cout << "*p1= " << *p1 <<  ", *p2= " << *p2 << endl;


return 0;
}
