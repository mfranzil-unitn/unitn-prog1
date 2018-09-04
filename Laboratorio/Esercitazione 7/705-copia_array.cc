#include <iostream>

using namespace std;

const int DIM = 5;

bool confrontaArray(const char p[], const char q[], int dim);
void copiaArray(char dest[], const char src[], int dim);

int main() {
  char a[] = {'a', 'b', 'c', 'd', 'e'};
  char b[DIM];

  bool uguali = confrontaArray(a, b, DIM);
  if(uguali) {
    cout << "Gli array sono uguali." << endl;
  } else {
    cout << "Gli array sono diversi: copio gli array" << endl;
    copiaArray(b, a, DIM);

    if(confrontaArray(a, b, DIM)) {
      cout << "Gli array ora sono uguali." << endl;
    } 
  }

  return (0);
}

void copiaArray(char dest[], const char src[], int dim) {
  for(int i = 0; i < dim; i++) {
    dest[i] = src[i];
  }
}

bool confrontaArray(const char p[], const char q[], int dim) {
  bool uguali = true;
  for(int i = 0; i < dim && uguali; i++) {
    // Oppure: uguali = (p[i] == q[i]);
    if(p[i] != q[i]) {
      uguali = false;
    }
  }
  return uguali;
}
