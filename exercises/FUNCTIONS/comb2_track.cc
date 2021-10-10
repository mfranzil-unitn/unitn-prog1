using namespace std;
#include <iostream>



//calcolo del fattoriale
long long fact(int num);
long long comb(int n1,int k1);

// messe qui per debugging
//int n,k;

int main() 
{

    int n,k;
  
//cerr << "Global variables: ----------\n";
cerr << "&n = " << (long) &n << ", dim= " << sizeof(n) << endl;
cerr << "&k = " << (long) &k << ", dim= " << sizeof(k) << endl;

  do {
    cout << "Dammi n e k (0 0 per terminare): " ;
    cin >> n >> k;
    if (n!=0)
      cout << "comb(" << n << "," << k << ") = " << comb(n,k) << endl;
  } while (n!=0);
return 0;
}


long long comb(int n1,int k1) 
{
  long long ris;
cerr << "  comb(" << n1 << "," << k1 << ") ----------\n";
cerr << "   &n1 = " << (long) &n1 << ", dim= " << sizeof(n1) << endl;
cerr << "   &k1 = " << (long) &k1 << ", dim= " << sizeof(k1) << endl;
cerr << "  &ris = " << (long) &ris << ", dim= " << sizeof(ris) << endl;

  ris = fact(n1);
  ris /=fact(k1);
  ris /=fact(n1-k1); // ris = fact(n1)/(fact(k1)*fact(n1-k1))

  return ris;
}

long long fact(int num) 
{
  long long fac = 1;
cerr << "     fact(" << num <<") ----------\n";
cerr << "     &num = " << (long) &num << ", dim= " << sizeof(num) << endl;
cerr << "     &fac = " << (long) &fac << ", dim= " << sizeof(fac) << endl;

  for (int i=1; i<=num; i++) 
    fac *= i;
  return fac;
}

