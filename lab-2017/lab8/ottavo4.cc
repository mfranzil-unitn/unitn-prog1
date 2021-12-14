#include <iostream>

using namespace std;

const int maxsize = 1000;

void inserisci (char [], int&, char);
void stampaArray(char [], int);

int main()
{
	char a[maxsize], comando, elemento;
	int dim;
	cout <<  "Inserisci la dimensione: ";
	cin >> dim;
	for (int i = 0; i < dim; i++)
	{
		cout << "Inserisci l'elemento #" << i << ": \n";
		cin >> a[i];
	}
	cout << "[";
	do {
	stampaArray(a, dim);
	cout << "Introdurre comando: ";
	cin >> comando;
	if (comando == 'i')
	{
		cout << "Introdurre elemento: ";
		cin >> elemento;
	} else if (comando == 'e') {} else { 
	cout << "Comando non valido!!!" << endl;
	}
	} while (comando != 'e' && comando !='i');
	inserisci(a, &dim, elemento);
	stampaArray(a, dim);
	return 0;
}

void inserisci(char a[], int & dim, char elemento)
{
	for (int j = 0; j<dim; j++)
	{
		if (elemento >= a[j+1] && elemento <= a[j-1] && j!=0)
		{
			dim++;
			for(int n=dim; n>j; n--)
			{
				n[a] = n[a-1];
			}
			a[j]= elemento;
		}
	}

}
void stampaArray(char a[], int & dim)
{
	for (int i = 0; i < dim; i++)
	{
		cout << a[i] << ", ";
	}
	cout << "end]" << endl;
}
