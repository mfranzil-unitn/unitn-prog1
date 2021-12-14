#include <iostream>
#include <cmath>
using namespace std;

void vertical(int);
void horizontal(int);
void left(int);
void right(int);

int main()
{
	char cho;
	int number;
	cout << "Insert the number of asterisks: "
	cin >> number;
	cout << "Choose your preferred setup:\n\n(v)ertical\n(h)orizontal\nslanting (l)eft\nslanting (r)ight\n\n";
	cin >> cho;
	switch (cho)
	{
		case 'v': vertical(number); break;
		case 'h': horizontal(number); break;
		case 'l': left(number); break;
		case 'r': right(number); break;
	}
	return 0;
}

void vertical(int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "*" << endl;
	}
}

void horizontal(int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "*";
	}
}

void left(int n)
{
	for (int i = 0; i<n; i++)
	{
		for (int spazi = 0; spazi<(n-i); spazi++)
		{
			cout << " ";
		}
		cout << "*" << endl;
	}
}

void right(int n)
{
	for (int i = 0; i<n; i++)
	{
		for (int spazi = 0; spazi<(n-i-1); spazi++)
		{
			cout << " ";
		}
		cout << "*" << endl;
	}
}
