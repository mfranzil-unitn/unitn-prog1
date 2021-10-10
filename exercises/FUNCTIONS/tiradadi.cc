using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>


void inizializza();
int  tiradadi();
void haivinto();
void haiperso();

int main()
{
  int miascelta=1;
  int dadi;

  inizializza();
//cout << "RAND_MAX e` " << RAND_MAX << endl;
  do {
    cout << "Che numero pensi esca? [2-12] (diverso per terminare): ";
    cin >> miascelta;
    if ((miascelta>=2)&&(miascelta<=12))
    {
      dadi = tiradadi();
      cout << dadi << " ";
      if (dadi==miascelta)
	haivinto();
      else
        haiperso();
    } 
  } while ((miascelta>=2)&&(miascelta<=12));
return 0;
}

void inizializza()
{
  unsigned int seed = time(NULL);
  //unsigned int seed = 0;
  srand(seed);
}

int tiradado() 
{
  int dado = rand()%6+1;
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
