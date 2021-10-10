using namespace std;
#include <iostream>

bool pari(int n);
bool dispari(int n);

bool pari(int n) {
  bool ris;
  if (n==0) 
    ris = true;
  else
    ris = dispari(n-1);
  return ris;
}

bool dispari(int n) {
  bool ris;
  if (n==0) 
    ris = false;
  else
    ris = pari(n-1);
  return ris;
}

int main() 
{
  int n;
  cout << "n? ";
  cin >> n;
  if (n>=0) 
    cout << n << " e` " << (pari(n) ? "pari" : "dispari") << endl;
  else
    cout << n << " e` minore di zero" << endl;
return 0;
}

