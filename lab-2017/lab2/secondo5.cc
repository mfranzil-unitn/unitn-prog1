#include <iostream> 
using namespace std;

int main()
{
  double a;
  cout << "Inserisci la temperatura in gradi °F: ";
  cin >> a;
  a-=32;
  a/=1.8;
  cout << "Se tu vivessi in Europa ci sarebbero " << a << "°C\n";
}

