using namespace std;
#include <iostream>

// calcolo soluzioni di ax + b = 0 

int main() { 
  float a,b;
  cout << "Dammi a e b : ";
  cin >> a >> b;
  if ((a==0)&&(b==0))
    cout<<"Infinite soluzioni\n";
  else if ((a==0)&&(b!=0))
    cout<<"Non esiste soluzione\n";
  else 
    cout<<"Soluzione: "<<-b/a<<endl;
return 0;
}
