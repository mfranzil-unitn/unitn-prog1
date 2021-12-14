#include <iostream>
#include <cmath>
using namespace std;

float max(float, float);

int main()
{
	float a, b;
	cout << "Inserisci due numeri separati da uno spazio: ";
	cin >> a >> b;
	if (a == b) 
	{
		cout << "I due numeri sopo uguali!" << endl;
	} 
	else 
	{
		cout << max(a,b) << " è il numero maggiore." << endl;	
	}
	return (0);
}

float max(float a, float b)
{
	int output;
	if (a > b) 
	{
		output = a;
	}
	else
	{
		output = b;
	}
	return output;
}
