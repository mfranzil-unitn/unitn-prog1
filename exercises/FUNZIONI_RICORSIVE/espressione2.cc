using namespace std;
#include <iostream>

// NOTA: ipotesi  di input "a prova di imbecille"

int valutaespressione(int n1, int n2,char op) {
  int res;
  switch (op) {
  case '+': res= n1+n2;break;
  case '-': res= n1-n2;break;
  case '*': res= n1*n2;break;
  case '/': res= n1/n2;break;
  }
  return res;
}

int leggievalutaespressione () {
  int res;
  char c;
  cin >> c;
  if ((c >= '0')&&(c<='9') )
    res = c-'0';
  else { // c deve essere "("
    char op,rpar;
    int n1,n2;
    n1=leggievalutaespressione();
    cout << " " << n1 << endl;
    cin >> op;
    n2=leggievalutaespressione();
    cout << " " << n2 << endl;
    cin >> rpar;
    res = valutaespressione(n1,n2,op);
  }
  return res;
}

int main ()        
{
  cout << "l'espressione vale " << 
           leggievalutaespressione() << endl;
return 0;
}
