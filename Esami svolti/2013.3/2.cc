#include <iostream>
#include <cstdlib>

using namespace std;

int * crea_vettore(int N);
void crea_vettore_ric(int*& res, int i, int dim);

int main()
{
	int N;
	cout << "Dimensione? ";
	cin >> N;
	if (N < 0)
	{
		cout << "Invalid number. ";
		exit(EXIT_FAILURE);
	}
	int* vector = crea_vettore(N);
	cout << "Array creato: ";
	for(int i = 0; i<N; i++)
		cout << vector[i] << " ";
	cout << endl;
	delete[] vector;
	return 0;
}

int* crea_vettore(int N)
{
	int * res = new int[N];
	crea_vettore_ric(res, 0, N);
	return res;
}

void crea_vettore_ric(int*& res, int i, int dim)
{
	if (i < dim)
	{
		res[i] = i*i;
		crea_vettore_ric(res, i+1, dim);
	}
}