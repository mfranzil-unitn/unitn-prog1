#include <iostream>
#include <cmath>	
using namespace std;
	
double radq(double n, bool* neg);

int main()
{
	double number;
	bool neg = 0;
	cout << "Insert a number: ";
	cin >> number;
 	number = radq(number,&neg);
	cout << "Program exited with code " << neg << ( neg==1 ? ". Invalid input, negative number was inserted " : ". Output value was " ) << number << endl;
	return 0;
}

double radq(double n, bool* neg)
{
	double output;
	if (n<0)
	{
		*neg = 1;
		output = 0;
	}
	else
	{
		output = sqrt(n);
	}
	return output;
}
