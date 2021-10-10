#include <iostream>
#include <cmath>

using namespace std;

long double branch1(long double);
long double branch2(long double);
int main()
{
	cout << "\t\t| -x^3\tper x<=0\nf =\t\t| e^x-1\tper x>0"
	     << "\n\nValori:\nx\t\tf(x)\n";
	for (int i=-10; i<=0; i++)
	{
		cout << i << "\t\t" << branch1(i) << endl;
	}
	for (int i=1; i<=10; i++)
	{
		cout << i << "\t\t" << branch2(i) << endl;
	}
	return 0;
}

long double branch1(long double value)
{
	value = pow(value,3);
	value = value*(-1);
	return value;
}

long double branch2(long double value)
{
	const long double nepero = 2.71828;
	value--;
	value = pow(nepero,value);
	return value;
} 
	 
	
