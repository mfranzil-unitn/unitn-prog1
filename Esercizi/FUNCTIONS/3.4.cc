#include <iostream>

using namespace std;

void rotate(double &, double &, double &);

int main()
{
	double a = 0, b = 0, c = 0;
	cout << "Insert three numbers with separators in between: ";
	cin >> a >> b >> c;
	rotate(a,b,c);
	cout << "After the rotation, a = " << a << ", b = " << b << ", c = " << c << endl;
	return 0;
}

void rotate (double & a, double & b, double & c)
{
	double t = c;
	c = a;
	a = b;
	b = t;
}
