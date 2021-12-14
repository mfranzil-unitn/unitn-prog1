#include <iostream>

using namespace std;

const int MAXDIM = 1000;
enum esito {vittoria, pareggio, sconfitta};
void contaOccorrenzeEsitow(esito, esito[], int, int);
void contaOccorrenzeEsito(esito, esito[], int, int, int);


int main()
{
	esito partite[MAXDIM] = {vittoria, sconfitta, pareggio, pareggio, sconfitta, pareggio, pareggio, sconfitta, pareggio, vittoria, vittoria, vittoria, pareggio, sconfitta, sconfitta, vittoria, pareggio, sconfitta, vittoria, vittoria};
	int wins, ties, losses = 0;
	contaOccorrenzeEsitow(vittoria, partite, MAXDIM, wins);
	contaOccorrenzeEsitow(pareggio, partite, MAXDIM, ties);
	contaOccorrenzeEsitow(sconfitta, partite, MAXDIM, losses);
	cout << "Wins: " << wins << endl;
	return 0;
}

void contaOccorrenzeEsitow(esito outcome, esito partite[], int dim, int istanze)
{
	contaOccorrenzeEsito(outcome, partite, dim, istanze, 0);
}

void contaOccorenzeEsito(esito outcome, esito partite[], int dim, int istanze, int i)
{
	if (partite[i] == outcome && istanze<dim)
	{
		istanze++;
	}
	contaOccorrenzeEsito(outcome, partite, dim, istanze, (i+1));
}	
