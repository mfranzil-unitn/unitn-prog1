#include <iostream>
#include <fstream>

using namespace std;

const int NUMERO_RIGHE = 6;
const int NUMERO_COLONNE = 5;

int** seleziona(int matrice[NUMERO_RIGHE][NUMERO_COLONNE], int riga, int colonna, int righe, int colonne);
int** alloca_matrice(int righe, int colonne);
void dealloca_matrice(int** matrice, int righe);
void stampa_matrice(int** matrice, int righe, int colonne);

int main()
{
	int matrice[][NUMERO_COLONNE] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10},
			{11, 12, 13, 14, 15}, {16, 17, 18, 19, 20},
			{21, 22, 23, 24, 25}, {26, 27, 28, 29, 30}};
	int n_riga, n_colonna, n_righe, n_colonne;
	cout << "Posizione primo elemento selezione (r, c): ";
	cin >> n_riga >> n_colonna;
	cout << "Dimensione della selezione (r, c): ";
	cin >> n_righe >> n_colonne;
	int ** selezione = seleziona(matrice, n_riga, n_colonna, n_righe, n_colonne);
	stampa_matrice(selezione, n_righe, n_colonne);
	dealloca_matrice(selezione, n_righe);
	return 0;
}

void stampa_matrice(int**  matrice, int righe, int colonne)
{
	for(int i = 0; i < righe; i++)
	{
		for(int j = 0; j < colonne; j++)
			cout << matrice[i][j] << "\t\t";
		cout << endl;
	}
}

int** seleziona(int matrice[NUMERO_RIGHE][NUMERO_COLONNE], int riga, int colonna, int righe, int colonne)
{
	int ** res = alloca_matrice(righe, colonne);
	for (int i = 0; i < righe; i++)
		for (int j = 0; j < colonne; j++)
			res[i][j] = matrice[riga+i][colonna+j];
	return res;
}

int** alloca_matrice(int righe, int colonne)
{
	int** res = new (nothrow) int*[righe];
	for(int i = 0; i < righe; i++)
	{
		res[i] = new (nothrow) int[colonne];
	}
	return res;
}

void dealloca_matrice(int** matrice, int righe)
{
	for(int i = 0; i < righe; i++)
		delete[] matrice[i];
	delete[] matrice;
}