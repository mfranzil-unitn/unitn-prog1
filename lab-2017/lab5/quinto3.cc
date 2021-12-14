#include <iostream>
#include <cmath>
using namespace std;

int mcm(int,int);

int main()
{
	int a, b;
	cout << "Inserisci i due numeri separati da uno spazio: ";
	cin >> a >> b;
	if ((a == 0) || (b == 0))
	{
		cout << "L'mcm è pari a 0" << endl;
	}
	else
	{
		cout << "L'mcm è pari a " << mcm(a,b) << endl;
	}	
	return 0;
}

int mcm(int a, int b)
{
	int tmp;
	tmp = a*b;
	for (int i = tmp; i>=max(a,b); i--)
	{
		if ((i%a==0)&&(i%b==0)) 
		{
			tmp = i;
		}
	}
	return tmp;
}
