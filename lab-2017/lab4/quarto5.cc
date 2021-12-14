#include <iostream>

using namespace std;

int main()
{
	unsigned int n;
	char asterisco = '*', risposta = 'y';
	cout << "Inserisci un intero n: \n";
	cin >> n;
	if (n>=30) 
	{
		cout << "Ma ne sei proprio sicuro....? (y) ";
		cin >> risposta;
	}	
	if (risposta = 'y')
	{
		for (int i = 0; i<n; i++)
		{
			for(int spazi = 0; spazi<i; spazi++)
			{
				cout << " ";
			}
			cout << asterisco << endl;
		}
	}
	return 0;
}
