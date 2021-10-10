//  Problem 4.20, page 120
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>
#include <cstdlib>
#include <time>


void inizializza();
int tiradado();
int tiradadi();
void haivinto();
void haiperso();

int main()
{
  int miascelta=1;
  int dadi;

  inizializza();
  cout << "{\n";
  for (int i=0;i<11;i++) {
    cout << "{ ";
    for (int j=0;j<90;j++) 
      cout << tiradado() << ",";
    cout << "\b},\n";
  }
  cout << "\b\b}\n";
}

void inizializza()
{
  unsigned int seed = time(NULL);
  srand(seed);
}

int tiradado() 
{
  int dado = rand()%32+1;
  return dado;
}


int tiradadi()
{
  int dado1 = tiradado();
  int dado2 = tiradado();
  int t = dado1 + dado2;
  return t;
}

void haivinto()
{
  cout << "\tHai vinto.\n";
}

void haiperso()
{
  cout << "\tHai perso.\n";
}
