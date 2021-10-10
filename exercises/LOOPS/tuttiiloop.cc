using namespace std;
#include <iostream>

int main(){ //numeri divisibili per 3
  int start, stop; 
  char c='s';

  while (c=='s') {
    cout<<"Inserisci un intervallo: ";
    cin >> start >> stop;

    for (int i=start; i<=stop; i++) {
      if ((i % 3)==0) 
        cout << i << " e' divisibile per 3\n"; 
    }
    do {
      cout<<"Vuoi continuare (s/n)? ";
      cin >> c; cout << endl;
    } while (c!='s' && c!='n');
  }
return 0;
}
