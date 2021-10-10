using namespace std;
#include <iostream>

int main()
{

double x1=1.0,x2=2.0;
double &y=x1; // ok
// double &y=x2; // errore! gia' definita!
//  double &z=3.0*x1; // errore! rif. a espressione non dotata di l-value
// int &w=x1; // errore! rif. a espressione di tipo diverso
  
cout << "x1= " << x1 << ", y= " << y << endl;
 x1+=1.0;
cout << "x1= " << x1 << ", y= " << y << endl;
 y+=1.0;
cout << "x1= " << x1 << ", y= " << y << endl;

  return 0;
}
