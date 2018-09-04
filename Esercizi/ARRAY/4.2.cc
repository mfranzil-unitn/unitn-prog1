#include <iostream>
#include <cmath>

using namespace std;

double scal(const double[], int);

const int size = 100;

int main()
{
	double arr1[size], arr2[size], result;
	int massimo;
	cout << "Insert the size of the vector: ";
	cin >> massimo;
	for (int i=0; i<massimo; i++)
	{
		cout << "Insert number # " << i << " of the vector: ";
		cin >> arr1[i];
	}
	result = scal (arr1, massimo);
	cout << endl << "The result is " << result << endl;
	return 0;
}

double scal (const double arr1[], int massimo)
{
	double output = 0;
	for (int i = 0; i<massimo; i++)
	{
		output += arr1[i]*arr1[i];
	}
	output = sqrt(output);
	return output;
}

