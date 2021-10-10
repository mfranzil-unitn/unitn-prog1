using namespace std;
#include<iostream>

void inc()
{ 
  static int n=4;
  cout << "Il valore di n e': "
       << n++ << endl; 
}

int main()
{ 
  for (int i=0; i<3; i++)
     inc(); 
  return 0;
}
 
/* Produce in output: */
/* Il valore di n e': 4 */
/* Il valore di n e': 5 */
/* Il valore di n e': 6 */
