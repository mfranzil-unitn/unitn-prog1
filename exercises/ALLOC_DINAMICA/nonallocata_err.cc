using namespace std;
#include <iostream>

int main() {
  int a = 5; //variabile statica;
  int *p;

// errore! p punta ad un'area non allocata:
//    *p = 3;
//cout << "p= " << p << ", *p = " << *p << endl;

    p = &a; 
// p punta all'area di memoria riservata staticamente
//  alla variabile a 
  cout << "p= " << p << ", *p = " << *p << ", a = " << a << endl;

  *p = 4; 
//corretto: a ora vale 4
  cout << "p= " << p << ", *p = " << *p << ", a = " << a << endl;
}
