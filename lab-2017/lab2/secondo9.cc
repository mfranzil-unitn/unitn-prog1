#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int a,b,c,sol1,sol2,det;
  cout << "Inserisci il coefficiente di x^2: ";
    cin >> a;
    cout << "Inserisci il coefficiente di x: ";
    cin >> b;
    cout << "Inserisci il termine noto: ";
    cin >> c;
    det=(b*b-(4*a*c))
      if(det > 0)
	{	  
    sol1=((-b+sqrt(det))/2*a);
    sol2=((-b-sqrt(det))/2*a);
	}
      else if (det == 0)
	
    cout << "Le due soluzioni sono: " << sol1 << " e " << sol2 << endl;
}

