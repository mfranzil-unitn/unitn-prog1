#include <iostream>

using namespace std;

double scal(const double[], const double[], int);

const int size = 100;

int main()
{
	double arr1[size], arr2[size], result;
	int massimo;
	cout << "Insert the size of the vectors: ";
	cin >> massimo;
	for (int i=0; i<massimo; i++)
	{
		cout << "Insert number # " << i << " of the first vector: ";
		cin >> arr1[i];
	}
	for (int i=0; i<massimo; i++)
	{
		cout << "Insert number # " << i << " of the second vector: ";
		cin >> arr2[i];
	}	
	result = scal (arr1, arr2, massimo);
	cout << endl << "The result is " << result << endl;
	return 0;
}

double scal (const double arr1[], const double arr2[], int massimo)
{
	double output = 0;
	for (int i = 0; i<massimo; i++)
	{
		output += arr1[i]*arr2[i];
	}
	return output;
}

