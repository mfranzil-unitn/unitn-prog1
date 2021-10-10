using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath> 

const float MAX=100.0;

int main () 
{

  cout << "  i     ln(i)  log10(i)   log2(i)\n";
  cout << "---------------------------------\n";
  cout.setf(ios::fixed); 
  
  for (float i=1.0;i<=MAX;i+=1.0) {
    cout << setw(3) << setprecision(0) 
         << i 
         << setprecision(4) 
         << setw(10) << log(i)
         << setw(10) << log10(i)  
         << setw(10) << log(i)/log(2.0) 
         << endl;
  }
return 0;
}

