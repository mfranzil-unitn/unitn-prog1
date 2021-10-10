#include <stdlib.h>
#include <iostream>
#include <cmath>

using namespace std;

//globale per order

void die(int[], int &); // rolling them dies
void gioco(int, int); 
void order(int &, int &, int &);
bool check(int, int); // 0 for defense victory, 1 for attack victory

int armies = 0; // variabile globale da reimplementare nel main, numero di armate perse dalla difesa

int main()
{
	int attack, defense;
	cout << "\nRisiko simulator:" << endl;
	do
	{
		cout << "Enter the amount of dies of the attacking army (1/2/3): ";
		cin >> attack;
	}
	while (attack < 1 || attack >3);
	do
	{
		cout << "Enter the amount of dies of the defending army (1/2/3): ";
		cin >> defense;
	}
	while (defense < 1 || defense >3);
	gioco(attack, defense);
	cout << "The attacking side lost " << (defense - armies) << " units, the defense side lost " << armies << ".\n";
	return 0;
}

bool check(int asort, int dsort)
{
	bool outcome;
	if (asort > dsort)
	{
		outcome = 1;
	}
	else if (asort <= dsort)
	{
		outcome = 0;
	}
	return outcome;
}

void gioco(int attack, int defense)
{
	int somma = attack + defense;
	int none = 0; // evita errori di valutazione
	char choice;
	int a1, a2, a3, d1, d2, d3;
	int arr[somma];
	do 
	{
		cout << "Do you want to use (m)anual or (r)andom mode? ";
		cin >> choice;
	}
	while (choice != 'm' && choice != 'r');
	if (choice == 'm')
	{
		for (int i = 0; i < attack; i++)
			 {
			 	do
			 	{
			 		cout << "Insert the attacking player dice #" << i+1 << endl;
			 		cin >> arr[i];
			 	}
			 	while (arr[i] < 1 || arr[i] > 6);
			 }
		for (int i = 0; i < defense; i++)
			 {
			 	do
			 	{
			 		cout << "Insert the defending player dice #" << i+1 << endl;
			 		cin >> arr[(attack+i)];

			 	}
			 	while (arr[i] < 1 || arr[i] > 6);
			 }
	}
	else
	{
		die(arr, somma);
	}
	if (attack == 1)
	{
		if (defense == 1)
		{
			cout << "The attacking side got " << arr[0] << ", the defense side got " << arr[1] << ";\n";
			a1 = arr[0];
			d1 = arr[1];
			armies += check(a1, d1);

		}
		else if (defense == 2)
		{
			cout << "The attacking side got " << arr[0] << ", the defense side got " << arr[1] << ", " << arr[2] << ";\n";
			a1 = arr[0];
			d1 = arr[1];
			d2 = arr[2];
			order(d1, d2, none);
			armies += check(a1, d1);
		}
		else if (defense == 3)
		{
			cout << "The attacking side got " << arr[0] << ", the defense side got " << arr[1] << ", " << arr[2] << ", " << arr[3] << ";\n";
			a1 = arr[0];
			d1 = arr[1];
			d2 = arr[2];
			d3 = arr[3];
			order(d1, d2, d3);
			armies += check(a1, d1);
		}
	}
	else if (attack == 2)
	{
		if (defense == 1)
		{
			cout << "The attacking side got " << arr[0] << ", " << arr[1] << ", the defense side got " << arr[2] << ";\n";
			a1 = arr[0];
			a2 = arr[1];
			d1 = arr[2];
			order(a1, a2, none);
			armies += check(a1, d1);
		}
		else if (defense == 2)
		{
			cout << "The attacking side got " << arr[0] << ", " << arr[1] << ", the defense side got " << arr[2] << ", " << arr[3] << ";\n";
			a1 = arr[0];
			a2 = arr[1];
			d1 = arr[2];
			d2 = arr[3];
			order(a1, a2, none);
			order(d1, d2, none);
			armies += check(a1, d1);
			armies += check(a2, d2);
		}
		else if (defense == 3)
		{
			cout << "The attacking side got " << arr[0] << ", " << arr[1] << ", the defense side got " << arr[2] << ", " << arr[3] << ", " << arr[4] << ";\n";
			a1 = arr[0];
			a2 = arr[1];
			d1 = arr[2];
			d2 = arr[3];
			d3 = arr[4];
			order(a1, a2, none);
			order(d1, d2, d3);
			armies += check(a1, d1);
			armies += check(a2, d2);
		}
	}
	else if (attack == 3)
	{
		if (defense == 1)
		{
			cout << "The attacking side got " << arr[0] << ", " << arr[1] << ", " << arr[2] << ", the defense side got " << arr[3] << ";\n";
			a1 = arr[0];
			a2 = arr[1];
			a3 = arr[2];
			d1 = arr[3];
			order(a1, a2, a3);
			armies += check(a1, d1);
		}
		else if (defense == 2)
		{
			cout << "The attacking side got " << arr[0] << ", " << arr[1] << ", " << arr[2] << ", the defense side got " << arr[3] << ", " << arr[4] << ";\n";
			a1 = arr[0];
			a2 = arr[1];
			a3 = arr[2];
			d1 = arr[3];
			d2 = arr[4];
			order(a1, a2, a3);
			order(d1, d2, none);
			armies += check(a1, d1);
			armies += check(a2, d2);
		}
		else if (defense == 3)
		{
			cout << "The attacking side got " << arr[0] << ", " << arr[1] << ", " << arr[2] << ", the defense side got " << arr[3] << ", " << arr[4] << ", " << arr[5] << ";\n";
			a1 = arr[0];
			a2 = arr[1];
			a3 = arr[2];
			d1 = arr[3];
			d2 = arr[4];
			d3 = arr[5];
			order(a1, a2, a3);
			order(d1, d2, d3);
			armies += check(a1, d1);
			armies += check(a2, d2);
			armies += check(a3, d3);
		}
	}

}

void order(int &x, int &y, int &z)
{
	if (x > y)
	{
		int tmp = x;
		x = y;
		y = tmp;
	}
	if (x > z)
	{
		int tmp = x;
		x = z;
		z = tmp;
	}
	if (y > z)
	{
		int tmp = y;
		y = z;
		z = tmp;
	}
}

void die(int arr[], int &somma)
{
	unsigned int seed = time(NULL);
	for (int i = 0; i <= somma; i++)
	{
		seed++;
		srand(seed);
		arr[i] = rand() % 6 + 1;
	}
}
