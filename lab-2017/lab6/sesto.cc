#include <iostream>
#include <cmath>

using namespace std;

bool verifica_primo(int&);

int main()
{
	unsigned int number;
	bool result;
	cout << "Insert a number: " << endl;
	cin >> number;
	result = verifica_primo(number);
	if ( result == 0 )
	{
		cout << "This number is not prime." << endl;
	}
	else
	{
		cout << "This number is prime." << endl;
	}
	return 0;
}

bool verifica_primo(int& x)
{
	bool output = 1;
	for (int i = 2; (i<=x) && (output==true); i++)
	{	
		if (x%i == 0)
		{
			output = 0;
		}
	}
	return output;
}
