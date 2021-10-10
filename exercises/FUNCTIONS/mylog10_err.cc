using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath> 

// calcola il logaritmo in base dieci di x
double mylog10 (double x) 
{ 
  double y = log(x)/log(10.0);
  return y;
}

int main () 
{
  const double Eps = 1.0e-10;
  double log,mylog;
  // const int prec=20;
  // const int width=25;
  const int prec=4;
  const int width=10;

  cout.setf(ios::fixed); 
  
  cout << "--------------------------------------------------\n";
  cout << "                      log10   mylog10\n";
  cout << "--------------------------------------------------\n";

  for (double i=1.0;i<=100.0;i+=2.0) {
    log=log10(i);
    mylog=mylog10(i);
    cout << setprecision(prec) 
         << "log10(" << setw(width) << i << ") =" 
         << setw(width) << log 
         << setw(width) << mylog;
    if (log==mylog)
      cout << "  Identici!";
    else 
      cout << "  Diversi! La differenza e' " << log-mylog;
    cout  << endl;
  }  
return 0;
}
