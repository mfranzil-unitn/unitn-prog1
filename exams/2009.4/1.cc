#include <iostream>

using namespace std;

const int MaxDim = 600;

int ricerca(int matrice[][MaxDim], int righe, int colonne, int target, int& r_found, int& c_found);

int main()
{	
	int matrice [MaxDim][MaxDim];
	int righe, colonne, target, r_found = -1, c_found = -1;
	cout << "Inserire il numero di righe: ";
	cin >> righe;
	cout << "Inserire il numero di colonne: ";
	cin >> colonne;
	for(int i = 0; i < righe; i++)
	{
		for(int j = 0; j < colonne; j++)
		{
			cout << "[ " << i << "][" << j << "]: ";
			cin >> matrice[i][j];
		}
	}
	cout << "Inserire il target: ";
	cin >> target;
	int trovato = ricerca(matrice,righe, colonne, target, r_found, c_found);
	if (!trovato)
		cout << "Target " << target << " non trovato" << endl;
	else
		cout << "Target trovato " << trovato << " volte: la prima istanza dell'intero è in posizione " << r_found << ", " << c_found << ".\n";
	return 0;
}

int ricerca(int matrice[][MaxDim], int righe, int colonne, int target, int& r_found, int& c_found)
{
	int res = 0;
	for(int i = 0; i < righe; i++)
	{
		for(int j = 0; j < colonne; j++)
		{
			if (matrice[i][j] == target)
			{
				res++;
				if (res == 1)
				{
					r_found = i;
					c_found = j;
				}	
			}
		}
	}
	return res;
}
