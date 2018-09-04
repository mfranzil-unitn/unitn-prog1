#include <iostream>
#include <cmath>

using namespace std;

void scal(double[], int);

const int size = 100;

int main()
{
	double arr1[size], arr2[size];
	int massimo;
	cout << "Insert the size of the vector: ";
	cin >> massimo;
	for (int i=0; i<massimo; i++)
	{
		cout << "Insert number # " << i << " of the vector: ";
		cin >> arr1[i];
	}
	scal (arr1, massimo);
	cout << endl << "The result is [";
	for (int i=0; i<massimo; i++)
	{
		cout << arr1[i];
		if (i==(massimo-1))
		{
			cout << "]\n";
		}
		else
		{
			cout << ", ";
		}
	}
	return 0;
}

void scal (double arr1[], int massimo)
{
	double norma = 0, output;
	for (int i = 0; i<massimo; i++)
	{
		output += arr1[i]*arr1[i];
	}
	norma = sqrt(output);
	for (int i = 0; i<massimo; i++)
	{
		arr1[i] = (arr1[i]/norma);
	}
}

