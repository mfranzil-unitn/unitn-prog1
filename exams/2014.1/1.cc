#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

double ** leggiMatrice (fstream& in, int righe, int colonne);

int main (int argc, char ** argv)
{
	fstream in;
	if (argc != 2) // ./a.out in.txt
	{
		cerr << "Invalid number of parameters! Terminating..." << endl;
		exit(EXIT_FAILURE);
	}
	in.open(argv[1], ios::in);
	int righe, colonne;
	in >> righe >> colonne;
	double** mat = leggiMatrice(in, righe, colonne);
	cout << "Matrice:\n{";
	for(int i = 0; i < righe; i++)
	{
		cout << "{";
		for (int j = 0; j < colonne; j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << "}, ";
	}
	cout << "}\n";
	in.close();
	return 0;
}

double ** leggiMatrice (fstream &in, int righe, int colonne)
{
	double ** res = new double*[righe];
	for(int i = 0; i < righe; i++)
	{
		res[i] = new double[colonne];
		for (int j = 0; j < colonne; j++)
		{
			in >> res[i][j];
			cout << res[i][j];
		}
	}
	return res;
}