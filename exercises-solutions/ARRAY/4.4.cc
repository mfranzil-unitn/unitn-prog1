#include <iostream>
#include <cmath>

using namespace std;

void scal(double[], int, double, int);

const int size = 100;

int main()
{
	double arr1[size], addition;
	int massimo = 0, indice;
	cout << "Insert the size of the vector: ";
	cin >> massimo;
	for (int i = 0; i < massimo; i++)
	{
		cout << "Insert element #" << i << " of the vector: ";
		cin >> arr1[i];
	}
	cout << "Insert the element to be added: ";
	cin >> addition;
	cout << "Insert the position (0 <= int <= n-1) of the addition: ";
	cin >> indice;
	scal(arr1, massimo, addition, indice);
	for (int i = 0; i < (massimo+1); i++)
	{
		cout << "a[" << i << "] = " << arr1[i] << endl;
	}
	return 0;
}

void scal(double arr1[], int massimo, double addition, int indice)
{
	for (int i = massimo; i >= indice; i--)
	{
		arr1[i+1] = arr1[i];
	}
	arr1[indice]=addition;
}
