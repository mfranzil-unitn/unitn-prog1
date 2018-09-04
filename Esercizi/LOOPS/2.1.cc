#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	unsigned long long int f0 = 0, f1 = 1, f2, count = 20;
	cout << "Successione di Fibonacci:\nINserisci il # di numeri da calcolare o 0 per il default [default: 20]:";
	cin >> count;
	if (count == 0)
	{	
		count = 20;
	}
	cout << "Numero #0: 0\nNumero #1: 1\n";
	for (int l = 2; l <= count; l++)
	{
		f2 = (f0 + f1);
		f0 = f1;
		f1 = f2;
		cout << "Numero # " << l << ": " << f2 << endl;
	}
	return (0);
}
