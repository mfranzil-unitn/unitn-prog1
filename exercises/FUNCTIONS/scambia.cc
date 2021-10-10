using namespace std;
#include <iostream>

// GLOBALI PER ESSERE TRACCIATE DAL DEBUGGER
  int a, b;


void scambia(int &,int &);

int main()
{
  do {
    cout << "dammi a e b (0 0 per terminare) ";
    cin >> a >> b ;
    scambia(a,b);
    cout << "a = " << a << " b= " << b << endl;
  } while ((a!=0)&&(b!=0));
return 0;
}

void scambia(int & n,int & m) 
{
  int t;
  t=n;
  n=m;
  m=t;
}

  
