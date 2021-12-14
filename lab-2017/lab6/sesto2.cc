#include <cmath>
#include <iostream>

using namespace std;
void estrai(int, int&, int&, int&);

int main()
{
	int date,year=0,month=0,day=0;
	cout << "Insert the date in this format: DDMMYYYY " ;
	cin >> date;
	estrai(date,year,month,day);
	cout << day << " / " << month << " / " << year << endl;
	return 0;
}

void estrai(int date, int & year, int & month, int & day)
{
	year = date % 10000;
	month = date / 10000 % 100;
	day = date / 1000000;
}
