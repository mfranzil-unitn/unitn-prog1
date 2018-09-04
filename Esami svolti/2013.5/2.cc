#include <iostream>

using namespace std;

const int N = 15;

// Inserire qui sotto la dichiarazione della funzione irsetion_sort_it
void insertion_sort_it(int v[], int dim);

int get_index_of_min_ric(int v[], int dim, int pos, int pos_min) {
	if (pos >= dim) {
		return pos_min;
	} else if (v[pos] < v[pos_min]) {
		return get_index_of_min_ric(v, dim, pos+1, pos);
	} else {
		return get_index_of_min_ric(v, dim, pos+1, pos_min);
	}
}

// Esempio di invocazione: insertion_sort_ric(vector, N, 0);
void insertion_sort_ric(int v[], int d, int p) {
	if (p >= d-1) {
		return;
	} else {
		int pos_min = get_index_of_min_ric(v,d,p,p);
		int tmp = v[p];
		v[p] = v[pos_min];
		v[pos_min] = tmp;
		insertion_sort_ric(v, d, p+1);
	}
}

int main() {
	int vector[] = {2, 17, 44, 202, 5, 13, 26, 7, 9, 131, 51, 79, 88, 96, 32};
	
	cout << "Aray iniziale: ";
	for(int i = 0; i < N; i++) {
		cout << vector[i] << " ";
	}
	cout << endl;
	
	insertion_sort_it(vector, N);
	
	cout << "Array ordinato: ";
	for(int i = 0; i < N; i++) {
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
