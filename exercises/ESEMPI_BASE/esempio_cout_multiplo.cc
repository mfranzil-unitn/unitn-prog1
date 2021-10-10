using namespace std;
#include <iostream>

int main ()        
{
  
   int x=10, y=29; 
   cout << "x contiene " << x  << endl; 
   cout << "y contiene " << y  << endl; 
   // equivalente a:
   ((cout << "x contiene ") << x) << endl;
   ((cout << "y contiene ") << y) << endl;

return 0;
}
 

