#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long double x, result=0;
	int a=0;
	cout << "\nln(1+x) calculator. Insert your x (-1<x<1): ";
	cin >> x;
	while (x<=-1 || x>=1)
	{
		if (a==20) {
		cout << "Insert A GOD DAMN DOUBLE BETWEEN 1 AND -1 FOR F**K'S SAKE ";
		} else { cout << "Invalid number. Please insert a float between -1 and 1. ";}
		cin >> x;
		a++;
	}
	for (int i = 1; i<10000; i++)
	{
		result += (pow(-1,i+1)*pow(x,i)/i);
	}	
	cout << "Your result for the summation up to 10000 can be approximated at " << result << endl;
	return 0;
}
