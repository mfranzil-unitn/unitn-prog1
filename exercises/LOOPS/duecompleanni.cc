using namespace std;
#include <iostream>

const double GIORNI = 365.0;

double prob_not (int N) {
  double acc = 1.0;
  for (int i = 1; i<N; i++) {
    acc *= (GIORNI-i)/GIORNI;
  }
  return acc;
}

int main () 
{
  int N;
  while (1) {
    cout << "Numero di persone?: ";
    cin >> N;
    cout << "La propabilita' che almeno 2 persone su " << N << " siano nate lo stesso giorno e' " <<    1.0 - prob_not(N) << endl;
  }

return 0;
}
