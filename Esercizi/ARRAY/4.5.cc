#include <iostream>
#include <cmath>

using namespace std;

void scal(double[], int &, double);

const int size = 100;

int main()
{
	double arr1[size], addition;
	int massimo = 0;
	cout << "Insert the size of the vector: ";
	cin >> massimo;
	for (int i = 0; i < massimo; i++)
	{
		cout << "Insert element #" << i << " of the vector: ";
		cin >> arr1[i];
	}
	cout << "Insert the element to be nuked: ";
	cin >> addition;
	scal(arr1, massimo, addition);
	for (int i = 0; i < massimo; i++)
	{
		cout << "a[" << i << "] = " << arr1[i] << endl;
	}
	return 0;
}

void scal(double arr1[], int & massimo, double addition)
{
	for(int i = 0; i < massimo; i++)
	{
		cout << "DEBUG: Scanning index #" << i << endl;
		if (arr1[i] == addition)
		{
			cout << "DEBUG: index of array " << i << " matches inserted double\n";
			for (int j = i; j<(massimo-1); j++)
			{
				arr1[j] = arr1[j+1];
				cout << "DEBUG: a[" << j+1 << "] copied into a[" << j << "]\n";
			}
			massimo--;
			i--;
		}
	}
	
}
