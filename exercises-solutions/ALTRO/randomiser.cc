#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream>

using namespace std;

const int MAX_DIM = 500;
const int MAX_ITEMS = 84;

// Array con i valori settati in maniera incondizionata
const int uno[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15, 18, 21, 24, 25, 27, 28, 29, 30, 31, 33, 34, 35, 36, 37, 39, 42, 43, 46, 47, 50, 51, 53, 54, 57, 61, 62, 63, 64, 65, 68, 76, 79};
const int due[] = {20, 44, 48, 71};
const int tre[] = {16, 17, 23, 26, 38, 41, 49, 66, 69, 81, 82};
const int quattro[] =  {32, 45, 52, 55, 60, 67, 70, 78};
const int cinque[] = {80, 84};
const int otto[] = {14, 19, 22, 40, 58, 59, 56, 72, 73, 74, 75, 77, 83};

// Array con le dimensioni 0-8
const int dim[] = {0, 46, 4, 11, 8, 2, 0, 0, 13};

char output[MAX_DIM] = "default.txt";

void insertsort(int* a, int size, int start);
void insertsortwr(int* a, int size);

void stampa_array(int* a, int size);
void stampa_numeri(fstream &myout, int number, int totalSize, int* statsCounter, int* arr, bool onFile);

void incoraggiamento(int instances);

int* alloca_array(int& totalSize);

int calcola_dimensioni(const int* a, int size);

int main()
{
	fstream myout;
	srand (time(NULL));
	char choice;
	bool isLogActive = 1;
	int number = -1, totalSize = 0, statsCounter[MAX_ITEMS];
	int* arr = alloca_array(totalSize);
	for(int i = 0; i < MAX_ITEMS; i++) // Azzera il contatore
	{
		statsCounter[i] = 0;
	}
	do
	{	
		cout << "Operazioni possibili:\n\tEstrai un numero (r)\n\tGenera una serie di numeri casuali (s)\n\tStampa dati a video (o)\n\tAbilita / disabilità logging (l)\n\tEsci (e)\n";
		cin >> choice;
		switch(choice)
		{
			case 'r':
				do
				{
					stampa_numeri(myout, number, totalSize, statsCounter, arr, 0);
					if (isLogActive)
					{
						myout.open("log.txt", ios::out);
						for(int i = 0; i < MAX_ITEMS; i++)
						{
							myout << i+1 << "," << statsCounter[i] << endl;
						}
						myout.close();
					}
					cout << "Continua? (s) ";
					cin >> choice;
				} while (choice == 's');
				break;
			case 'o':
				cout << "Numero totale di valori : " << totalSize << "\nElementi dell'array: " << endl;
				stampa_array(arr, totalSize);
				break;
			case 'l':
				if (isLogActive)
				{
					isLogActive = false;
					cout << "Logging disabilitato." << endl;
				}
				else
				{
					isLogActive = true;
					cout << "Logging abilitato." << endl;
				}
				break;
			case 's':
				cout << "Inserisci il numero di valori da calcolare: ";
				cin >> number;
				do
				{
					cout << "Vuoi stampare a video o su file? (v/f) ";
					cin >> choice;
					if (choice == 'v')
					{
						for(int i = 0; i < number; i++)
						{
							stampa_numeri(myout, number, totalSize, statsCounter, arr, 0);
							if (isLogActive)
							{
								myout.open("log.txt", ios::out);
								for(int i = 0; i < MAX_ITEMS; i++)
								{
									myout << i+1 << "," << statsCounter[i] << endl;
								}
								myout.close();
							}
						}
					}
					else if (choice == 'f')
					{
						cout << "Inserisci il nome del file su cui salvare (verrà usata la cartella corrente): ";
						cin >> output;
						stampa_numeri(myout, number, totalSize, statsCounter, arr, 1);
						if (isLogActive)
						{
							myout.open("log.txt", ios::out);
							for(int i = 0; i < MAX_ITEMS; i++)
							{
								myout << i+1 << "," << statsCounter[i] << endl;
							}
							myout.close();
						}
					}
					else
					{
						cout << "Scelta non valida! ";
					}
				} while (choice != 'v' && choice != 'f');
				break;
			case 'e':
				exit(EXIT_SUCCESS);
				break;
			default:
				cout << "Scelta non valida!" << endl;
				break;
		}
		for (int i = 0; i < MAX_ITEMS; i++) // Azzera il contatore
		{
			statsCounter[i] = 0;
		}
	} while(choice != 'r' || choice != 'l' || choice != 'e');
	return (0);
}

int* alloca_array(int& totalSize)
{
	totalSize = calcola_dimensioni(dim, 9); // 233
	int* arr = new (nothrow) int[totalSize];
	int i = 0;
	for(int k = 0; k < 8; k++)
	{
		for(int j = 0; j < dim[8]; j++)
		{
			arr[i] = otto[j];
			i++;
		}
	}
	for(int k = 0; k < 5; k++)
	{
		for(int j = 0; j < dim[5]; j++)
		{
			arr[i] = cinque[j];
			i++;
		}
	}
	for(int k = 0; k < 4; k++)
		for(int j = 0; j < dim[4]; j++)
		{
			arr[i] = quattro[j];
			i++;
		}
	{
	for(int k = 0; k < 3; k++)
		for(int j = 0; j < dim[3]; j++)
		{
			arr[i] = tre[j];
			i++;
		}
	}
	for(int k = 0; k < 2; k++)
	{
		for(int j = 0; j < dim[2]; j++)
		{
			arr[i] = due[j];
			i++;
		}
	}
	for(int k = 0; k < 1; k++)
		for(int j = 0; j < dim[1]; j++)
		{
			arr[i] = uno[j];
			i++;
		}
	insertsortwr(arr, totalSize);
	return arr;
}

int calcola_dimensioni(const int* a, int size)
{
	int res = 0;
	for(int i = 0; i < size; i++)
		res += (i*a[i]);
	return res;
}

void insertsortwr(int* a, int size)
{
	insertsort(a, size, 1);
}

void insertsort(int* a, int size, int start)
{
	if (a[start]<a[start-1])
	{
		swap(a[start],a[start-1]);
		start = start-2;
	}
	if (start < size-1)
	{
		insertsort(a, size, start+1);
	}
}

void stampa_array(int* a, int size)
{
	for(int i = 0; i < size; i++)
		cout << a[i] << " ";
	cout << endl;
}

void incoraggiamento(int instances)
{
	switch(instances)
	{
		case 2:
			cout << "Questa è la seconda volta che dimostri questo teorema. ";
			break;
		case 3:
			cout << "Questa è la terza volta che dimostri questo teorema. ";
			break;
		case 4:
			cout << "Questa è la quarta volta che dimostri questo teorema. ";
			break;
		case 5:
			cout << "Direi che lo saprai sto teorema ormai no, dopo 5 volte. ";
			break;
		case 6:
			cout << "Basta ti prego... siamo a 6.";
			break;
		case 0:	case 1:
			break;
		default:
			cout << "Questa è la volta #" << instances << " che dimostri questo teorema. ";
			break;
	}
}

void stampa_numeri(fstream &myout, int number, int totalSize, int* statsCounter, int* arr, bool onFile)
{
	if (!onFile)
	{
		number = rand() % (totalSize);
		statsCounter[arr[number]-1]++;
		cout << "Il numero uscito è " << arr[number] << ". ";
		incoraggiamento(statsCounter[arr[number]-1]);
		cout << endl;
	}
	else
	{	
		myout.open(output, ios::out);
		for(int k = 0; k < number; k++)
			myout << arr[rand() % (totalSize)] << endl;
		myout.close();
	}
}