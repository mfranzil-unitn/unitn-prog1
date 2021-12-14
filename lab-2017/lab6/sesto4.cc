#include <cmath>
#include <iostream>

using namespace std;

bool check(int,int,int);

int main()
{
	double l1, l2, l3;
	cout << "Insert the three edges separated by a space (double): ";
	cin >> l1 >> l2 >> l3;
	if ( check(l1,l2,l3) == 0)
	{
		cout << "The three edges cannot represent a triangle in any way.\n";
	}
	else
	{
		cout << "The three edges can represent a triangle.\n";
	}
	return 0;
}

bool check (int l1, int l2, int l3)
{
	bool output = 0;
	if (((l1 + l2) > l3) && ( (l2+l3)>l1) && ((l3+l1)>l2))
	{
		output = 1;
	}
	return output;
}
