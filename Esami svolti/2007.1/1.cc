#include <iostream>
using namespace std;

void leggi_array (int v[], int dim);
void stampa_array (int v[], int dim);
int* differenza (int v1[], int dim1, int v2[], int dim2, int &dim3);

int main()
{
	//const int MAX_DIM = 100;
	int v1[] = {9, 8, 7, 6, 5, 4, 3, 2};
	int dim1 = 8;
	int v2[] = {9, 5, 4, 3};
	int dim2 = 4;
	int dim3 = dim1-dim2;
	/*	int v1[MAX_DIM], v2[MAX_DIM];
	int dim1, dim2, dim3;
	cout << "Inserisci dim1: ";
	cin >> dim1;
	//leggi_array(v1, dim1);
	cout << "Inserisci dim2: ";
	cin >> dim2;
	leggi_array(v2, dim2); */
	int* v3 = differenza(v1, dim1, v2, dim2, dim3);
	if(v3 == NULL)
		cout << "No match found! " << endl;
	else
	{
		cout << "I numeri presenti in\n";
		stampa_array(v1, dim1);
		cout << "ma non in\n";
		stampa_array(v2, dim2);
		cout << " sono: \n";
		stampa_array(v3, dim3);
	}
	return 0;
}

void leggi_array (int v[], int dim)
{
	for (int i = 0; i < dim; i++)
	{
		cout << "#" << i << ": ";
		cin >> v[i];
	}
}

void stampa_array (int v[], int dim)
{
	for (int i = 0; i < dim; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int* differenza (int v1[], int dim1, int v2[], int dim2, int &dim3)
{
	int* v3 = new int[dim3];
	int i = 0, i1 = 0, i2 = 0;
	while(i2 < dim2 && i1 < dim1)
	{
		if (v1[i1] == v2[i2])
		{
			i2++;
			i1++;
		}
		else if (v1[i1] > v2[i2])
		{
			v3[i] = v1[i1];
			i++;
			i1++;
		}
		else
		{
			i2++;
		}
	}
	while(i1 < dim1)
	{
		v3[i] = v1[i1];
		i++;
		i1++;
	}
	if(i = 0)
	{
		delete[] v3;
		v3 = NULL;
	}
	return v3;
}