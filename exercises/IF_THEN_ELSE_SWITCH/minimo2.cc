using namespace std;
#include <iostream>

int main () 
{ 
  int x, y, z;
  
  cout << "Dammi tre interi x, y e z: ";
  cin >> x >> y >> z;
  cout << "Il minimo tra " << x << ", " << y << " e " << z << " e' ";  
  if (x<=y && x<=z)  
    cout << x;
  else if (y<=x && y<=z) 
    cout << y;
  else
    cout << z;
  cout << endl;
return 0;
}
