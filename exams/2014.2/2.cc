#include <iostream>

using namespace std;

const int DIM = 81;

// Dichiarare qui sotto la funzione estrai
char *estrai(char stringa[]);
void estrai_ric(char stringa[], int i, char res[], int j);

int main() {
	char stringa[DIM];
	char * estratta;
	char risposta = 'n';

	do {
		cout << "Inserisci la stringa da controllare: ";
		cin >> stringa;

		estratta = estrai(stringa);

		cout << "La stringa estratta e': ";
		cout << estratta;
		cout << endl;
		cout << "Vuoi inserire un'altra stringa? [s/n] ";
		cin >> risposta;
	} while (risposta != 'n');
	return 0;
}

char* estrai(char stringa[])
{
	char * res = new char[DIM];
	estrai_ric(stringa, 0, res, 0);
	return res;
}

void estrai_ric(char stringa[], int i, char res[], int j)
{
	if (stringa[i] != '\0')
	{
		if (stringa[i] >= 'A' && stringa[i] <= 'Z')
		{
			res[j] = stringa[i];
			j++;
			i++;
		}
		else
		{
			i++;
		}
		estrai_ric(stringa, i, res, j);
	}
}