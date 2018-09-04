//
// Presi in input due interi, calcolare mediante
// un'apposita funzione il massimo
// tra i due interi acquisiti da tastiera
// la fuzione massimo dovra' avere la
// seguente dichiarazione
// int massimo (int,int);
// il massimo sara' stampato a video dal main
//

#include <iostream> 

using namespace std;

// dichiarazione di funzione
int massimo (int,int);


// dichiarazione funzione principale
int main() 
{ 
  int a,b,pippo;

  cout << "Inserisci un intero: ";
  cin >> a;
  cout << "Inserisci un intero: ";
  cin >> b;

  pippo=massimo(a,b);
  cout << pippo << endl;

  return(0);
}

//definizione funzione fibonacci
int massimo (int a, int b)
{
  int app;
  
  if (a>b)
    {
      app=a;
    }
  else
    {
      app=b;
    }
  return(app);
}
