using namespace std;
#include <iostream>
#include <iomanip>

// messe qui per debugging
  int n,k;

//calcolo del fattoriale
long long fact(int num) 
{
  long long fatt = 1;
  for (int i=1; i<=num; i++)
    fatt *= i;
cout << setw(10) << "    &num = " << &num << ", &fatt = " << &fatt << endl;
  // cout << "    num= " << num << ", &num = " << &num 
  //      << ", fatt= " << fatt << ", &fatt = " << &fatt << endl;
  return fatt;
}

// calcola le combinazioni semplici di N1 e K1
long long comb(int n1,int k1) 
{
  long long ris;
cout << "  &n1 = " << &n1 << ", &k1 = " << &k1 << endl;   
  ris = fact(n1);
  ris /=fact(k1);
  ris /=fact(n1-k1); // ris = fact(n1)/(fact(k1)*fact(n1-k1))
  return ris;
}

int main() 
{
  
  do {
    cout << "Dammi n e k (0 0 per terminare): " ;
    cin >> n >> k;
cout  << "&n = " << setw(10) << &n << ", &k = " <<  setw(10) << &k << endl;   
    if (n!=0)
      cout << "comb(" << n << "," << k << ") = " << comb(n,k) << endl;
  } while (n!=0);
return 0;
}

