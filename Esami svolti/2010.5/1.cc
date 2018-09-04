#include <iostream>

using namespace std;

void inverti_array(long * array, int dim);
void inverti(long& a, long& b);
void inverti_array_ric(long* array, int start, int dim);

int main()
{
	int dim;
	long array[100];
	do
	{
		cout << "Inserisci il numero (0 < ... < 100) di elementi da memorizzare nell'array: ";
		cin >> dim;
	} while (dim <= 0 && dim > 100);
	for (int i = 0; i < dim; i++)
	{
		cout << "Inserire valore " << i+1 << ": ";
		cin >> array[i];
	}
	inverti_array(array, dim);
	cout << "Array invertito:\n";
	for (int i = 0; i < dim; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	return 0;
}

void inverti_array(long* array, int dim)
{
	inverti_array_ric(array, 0, dim);
}

void inverti_array_ric(long* array, int start, int dim)
{
	if (start < dim)
	{
		inverti(array[start], array[dim-1]);
		if (array[start] != array[dim-1])
			inverti_array_ric(array, start+1, dim-1);
	}
}

void inverti(long& a, long& b)
{
	long tmp = a;
	a = b;
	b = tmp;
}
		
		
	
