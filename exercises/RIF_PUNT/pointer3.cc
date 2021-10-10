using namespace std;
#include <iostream>

int main()
{

  double *py=(double *)321;
  cout << "py = " << py << endl; //0x141 codifica esadecimale per 321
  cout << "*py = " << *py << endl; // pericoloso

return 0;
}
