using namespace std;
#include <iostream>

int main(){
  /* somma i numeri multipli di 5 o 8
     nell'intervallo da 1 a 30 */

  int i=0, somma=0;
  while (i<30) {
    i++;
    if ((i%5)!=0 && (i%8)!=0)
      continue;
    cout << i << endl;
    somma+=i;
  }
  cout << "somma = "<<somma<<endl;
return 0;
}
