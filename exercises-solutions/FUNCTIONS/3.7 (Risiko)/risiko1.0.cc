#include <stdlib.h>
#include <iostream>
#include <cmath>

using namespace std;

void die(int[], int &);
void gioco(int, int);
void ordertre(int &, int &, int &);
void orderdue(int &, int &);
bool check(int, int); // 0 for defense victory, 1 for attack victory

int armies = 0; // variabile globale da reimplementare nel main, numero di armate perse dalla difesa

int main()
{
	int attack, defense;
	cout << "\nRisiko simulator:" << endl;
	do {
		cout << "Enter the amount of dies of the attacking army (1/2/3): ";
		cin >> attack;
	} while (attack < 1 || attack >3);
	do {
		cout << "Enter the amount of dies of the defending army (1/2/3): ";
		cin >> defense;
	} while (defense < 1 || defense >3);
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
	int a1, a2, a3, d1, d2, d3;
	int arr[somma];
	die(arr, somma);
	if (attack == 1)
	{
		if (defense == 1)
		{
			cout << "The attacking side got " << arr[1] << ", the defense side got " << arr[2] << ";\n";
			a1 = arr[1];
			d1 = arr[2];
			armies += check(a1, d1);

		}
		else if (defense == 2)
		{
			cout << "The attacking side got " << arr[1] << ", the defense side got " << arr[2] << ", " << arr[3] << ";\n";
			a1 = arr[1];
			d1 = arr[2];
			d2 = arr[3];
			orderdue(d1, d2);
			armies += check(a1, d1);
		}
		else if (defense == 3)
		{
			cout << "The attacking side got " << arr[1] << ", the defense side got " << arr[2] << ", " << arr[3] << ", " << arr[4] << ";\n";
			a1 = arr[1];
			d1 = arr[2];
			d2 = arr[3];
			d3 = arr[4];
			ordertre(d1, d2, d3);
			armies += check(a1, d1);
		}
	}
	else if (attack == 2)
	{
		if (defense == 1)
		{
			cout << "The attacking side got " << arr[1] << ", " << arr[3] << ", the defense side got " << arr[2] << ";\n";
			a1 = arr[1];
			a2 = arr[3];
			d1 = arr[2];
			orderdue(a1, a2);
			armies += check(a1, d1);
		}
		else if (defense == 2)
		{
			cout << "The attacking side got " << arr[1] << ", " << arr[4] << ", the defense side got " << arr[2] << ", " << arr[3] << ";\n";
			a1 = arr[1];
			a2 = arr[4];
			d1 = arr[2];
			d2 = arr[3];
			orderdue(a1, a2);
			orderdue(d1, d2);
			armies += check(a1, d1);
			armies += check(a2, d2);
		}
		else if (defense == 3)
		{
			cout << "The attacking side got " << arr[1] << ", " << arr[5] << ", the defense side got " << arr[2] << ", " << arr[3] << ", " << arr[4] << ";\n";
			a1 = arr[1];
			a2 = arr[5];
			d1 = arr[2];
			d2 = arr[3];
			d3 = arr[4];
			orderdue(a1, a2);
			ordertre(d1, d2, d3);
			armies += check(a1, d1);
			armies += check(a2, d2);
		}
	}
	else if (attack == 3)
	{
		if (defense == 1)
		{
			cout << "The attacking side got " << arr[1] << ", " << arr[3] << ", " << arr[4] << ", the defense side got " << arr[2] << ";\n";
			a1 = arr[1];
			a2 = arr[3];
			a3 = arr[4];
			d1 = arr[2];
			ordertre(a1, a2, a3);
			armies += check(a1, d1);
		}
		else if (defense == 2)
		{
			cout << "The attacking side got " << arr[1] << ", " << arr[4] << ", " << arr[5] << ", the defense side got " << arr[2] << ", " << arr[3] << ";\n";
			a1 = arr[1];
			a2 = arr[4];
			a3 = arr[5];
			d1 = arr[2];
			d2 = arr[3];
			ordertre(a1, a2, a3);
			orderdue(d1, d2);
			armies += check(a1, d1);
			armies += check(a2, d2);
		}
		else if (defense == 3)
		{
			cout << "The attacking side got " << arr[1] << ", " << arr[5] << ", " << arr[6] << ", the defense side got " << arr[2] << ", " << arr[3] << ", " << arr[4] << ";\n";
			a1 = arr[1];
			a2 = arr[5];
			a3 = arr[6];
			d1 = arr[2];
			d2 = arr[3];
			d3 = arr[4];
			ordertre(a1, a2, a3);
			ordertre(d1, d2, d3);
			armies += check(a1, d1);
			armies += check(a2, d2);
			armies += check(a3, d3);
		}
	}

}

void ordertre(int &x, int &y, int &z)
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

void orderdue(int &x, int &y)
{
	if (y > x)
	{
		int t;
		t = x;
		x = y;
		y = t;
	}
}


void die(int arr[], int &somma)
{

	for (int i = 0; i <= somma; i++)
	{
		unsigned int seed = time(NULL) + i;
		srand(seed);
		arr[i] = rand() % 6 + 1;
	}
}
