#include <iostream>
#include <cmath>

using namespace std;

void circle(double &);

int main()
{
	double radius = 0;
	do
	{
		cout << "Insert the circle radius: ";
		cin >> radius;
	} while (radius <=0);
	circle(radius);
	cout << radius << endl;
	return 0;
}

void circle (double & radius)
{
	double pi = 3.14159265359;
	radius = pow(radius,2);
	radius *= pi;
	
}
