#include <iostream>
using namespace std;

int ** modificaMatrice(int**, int, int);
void stampaMatrice(int**, int, int);
int ** generaMatrice(int, int);
int valoreass(const int &);

const int NR = 4;
const int NC = 4;

int main(int argc, char * argv[]) {
	int** matriceOriginale = generaMatrice(NR, NC);
	
	cout << "Matrice originale:" << endl;
	stampaMatrice(matriceOriginale, NR, NC);
	cout << endl;
	
	int** matriceModificata = modificaMatrice(matriceOriginale, NR, NC);
	
	cout << "Matrice modificata:" << endl;
	stampaMatrice(matriceModificata, NR, NC);
	cout << endl;
	
	return 0;
}

int ** modificaMatrice( int** in, int righe, int colonne) {
	int ** res = new int*[righe];
	for (int i = 0; i < righe; i++)
	{
		res[i] = new int[colonne];
	}
	for (int i = 0; i < righe; i++)
	{
		for (int j = 0; j < colonne; j++)
		{
			res[i][j] = valoreass(in[i][j]);
		}
	}
	return res;
}

int valoreass(const int & in) {
	int res = in;
	if (res < 0)
		res *= -1;
	return res;
}

void stampaMatrice(int** res, int righe, int colonne) {
	for (int i = 0; i < righe; i++)
	{
		for (int j = 0; j < colonne; j++)
		{
			cout << res[i][j];
		}
		cout << endl;
	}
}

int ** generaMatrice(int righe, int colonne) {
	int ** res = new int*[righe];
	for (int i = 0; i < righe; i++)
	{
		res[i] = new int[colonne];
		for (int j = 0; j < colonne; j++)
		{
			cout << "[" << i << "][" << j << "]: ";
			cin >> res[i][j];
		}
	}
	return res;
}