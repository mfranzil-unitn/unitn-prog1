using namespace std;
#include <iostream>
#include "entry.h"
#include "expression.h"


int main() {

  const int MaxDim = 10;
  int Currdim = 0;
  expression exp_list[MaxDim];

  expression exp1, exp2, exp;
  double value;
  entry op;  
  int index, index1, index2;
  char scelta;

  do {
    cout << endl;
    cout << "(e)lenca tutte le espressioni\n";
    cout << "(i)nserisci nuova espressione\n";
    cout << "(s)tampa un'espressione\n";
    cout << "(c)omponi due espressioni\n";
    cout << "(v)aluta un'espressione\n";
    cout << "(r)imuovi un'espressione\n";
    cout << "(f)ine\n";
    cout << endl;
    cin >> scelta;
    switch(scelta) {
    case 'e':
      for (int i=0;i<Currdim;i++) {
        cout << i << ": ";
        print_expression(exp_list[i]);
        cout << endl;
      }
      break;
    case 'i': 
      read_expression( exp_list[Currdim++]);
      cout << endl;
      break;
    case 's': 
      cout << "espressione da stampare?: ";
      cin >> index;
      print_expression(exp_list[index]);
      cout << endl;
      break;
    case 'c': 
      cout << "espressioni da comporre?: ";
      cin >> index1 >> index2;
      cout << "operatore?: ";
      read_entry(op);
      exp_list[Currdim++] = compose_expression(exp_list[index1],op,exp_list[index2]);
      cout << endl;
      break;
    case 'v': 
      cout << "espressione da valutare?: ";
      cin >> index;
      cout << "l'espressione vale " << evaluate_expression(exp_list[index]) << endl;
      break;
    case 'r': 
      cout << "espressione da rimuovere?: ";
      cin >> index;
      cout << endl;
      for(int i=index;i<Currdim;i++)
        exp_list[i]=exp_list[i+1];
      Currdim--;
      cout << endl;
      break;
    case 'f': 
      break;
    default:
      cout << "opzione errata, riprova\n";
    }
  } while (scelta!='f');
}
