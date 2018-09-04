#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

// Inserire qui sotto la dichiarazione della funzione irsetion_sort_it
void insertion_sort_it(int v[], int dim);

int main() {
	srand (time(NULL));
	int size = rand() % 25;
	int* vector = new int[size];
	cout << "Array iniziale: ";
	for(int i = 0; i < size; i++)
	{
		vector[i] = rand() % 9;
		if (rand() % 2 == 0)
			vector[i] *= -1;
		cout << vector[i] << " ";
	}
	cout << endl << endl << endl;
	
	insertion_sort_it(vector, size);
	
	cout << "Array ordinato: ";
	for(int i = 0; i < size; i++) {
		cout << vector[i] << " ";
	}
	cout << endl;
	
	return 0;
}

void insertion_sort_it(int v[], int dim)
{
	int tmp, pos, pos_min;
	for(int i = 0; i < dim-1; i++)
	{
		pos = i, pos_min = i;
		while(pos < dim)
		{
			if (v[pos] < v[pos_min])
			{
				pos_min = pos;
				pos++;
			}
			else
			{	
				pos++;
			}
		}
		tmp = v[i];
		v[i] = v[pos_min];
		v[pos_min] = tmp;
	}
}
