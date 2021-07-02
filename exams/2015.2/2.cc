#include <iostream>
#include <cmath>

using namespace std;
const int MAX_DIM = 90;


double calcola_norma_ricorsivo(int *, int, int);
double * normalizza(int *, int);
void copia_array(int * a, double * b, int dim);


void normalizza_2(double *, int, int, double);

void leggi(int*, int&);
void stampa(double*, int);

int main() {
	int array[MAX_DIM];
	int dim;
	leggi(array, dim);
	double* normalizzato = normalizza(array, dim);
	cout << "Array normalizzato: " << endl;
	stampa(normalizzato, dim);
	return 0;
}

// Inserire qui sotto le DEFINIZIONI delle funzioni

void leggi(int* a, int & dim)
{
	cout << "Dimensione: ";
	cin >> dim;
	for (int i = 0; i < dim; i++)
	{
		cout << "#" << i << ": ";
		cin >> a[i];
	}
}

void stampa(double* a, int dim)
{
	for (int i = 0; i < dim; i++)
	{
		cout << a[i] << " ";
	}
}

double calcola_norma_ricorsivo(int arr[], int n, int sum) {
	double res;
	if (n < 0)
	{
		res = sqrt(sum);
	}
	else
	{
		sum += arr[n] * arr[n];
		res = calcola_norma_ricorsivo(arr, n - 1, sum);
	}
	return res;
}

double * normalizza(int * a, int dim)
{
	double* res = new double[dim];
	copia_array(a, res, dim);
	normalizza_2(res, dim, 0, calcola_norma_ricorsivo(a, dim, 0));
	return res;
}

void normalizza_2(double * a, int dim, int index, double norma)
{
	if(index<dim)
	{
		a[index] = a[index]/norma;
		normalizza_2(a, dim, index+1, norma);
	}
}

void copia_array(int * a, double * b, int dim)
{
	if (dim > 0)
	{
		b[dim-1] = a[dim-1];
		copia_array(a, b, dim-1);
	}
}