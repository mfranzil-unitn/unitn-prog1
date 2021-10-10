using namespace std;
#include <iostream>

int main () 
{ 
  int x, y;
  
  cout << "Dammi due interi x e y: ";
  cin >> x >> y;
  cout << "Il minimo tra " << x << " e " << y << " e' ";  
  if (x<=y) 
    cout << x;
  else
    cout << y;
  cout << endl;
return 0;
}
