#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void splitter(double&, double&, bool&);
double function(double&);
void positivita(double&, double&);
int cifresig(double);


double Eps = 0.0000000001; // precisione dei calcoli
double var1 = 0, var2 = 0, var3 = 0, var4 = 0, var5 = 0;
char funzione = '2';

int main()
{
	double a, b;
	cout << "Insert the precision for the calculations (not for the showed numbers) (double): ";
	cin >> Eps;
	do
	{
		cout << "Insert the type of function:\n\tlinear [1]\t\tquadratic [2]\t\tcubic [3]\t\tfourth [4]: " ;
		cin >> funzione;
	}
	while (funzione != '4' && funzione != '3' && funzione !='2' && funzione !='1');
	if (funzione == '4')
	{
		cout << "The equation of the cubic function is of the type \"ax^4 + bx^3 + cx^2 + dx + e = 0\".\nInsert a, b, c, d, e in this order: ";
		cin >> var1 >> var2 >> var3 >> var4 >> var5;
	}
	else if (funzione == '3')
	{
		cout << "The equation of the cubic function is of the type \"ax^3 + bx^2 + cx + d = 0\".\nInsert a, b, c, d in this order: ";
		cin >> var1 >> var2 >> var3 >> var4;
	}
	else if (funzione == '2')
	{
		cout << "The equation of the parabola is of the type \"(x-x0)^2 + y0\".\nInsert x0 and y0 in this order: ";
		cin >> var1 >> var2;
	}
	else if (funzione == '1')
	{
		cout << "The equation of the line is of the type \"y = mx + q\".\nInsert m and q in this order: ";
		cin >> var1 >> var2;
	}
	cout << "Insert the range (one negative, one positive) separated by spaces: ";
	cin >> a >> b;
	positivita(a,b);
	return 0;
}

double function(double & x)
{
	double output;
	if (funzione == '4')
	{
		output = var1*pow(x,4) + var2*pow(x,3) + var3*pow(x,2) + var4*x + var5;
	}
	else if (funzione == '3')
	{
		output = var1*pow(x,3) + var2*pow(x,2) + var3*x + var4;
	}
	else if (funzione == '2')
	{
		output = pow((x-var1),2) + var2;
	}
	else if (funzione == '1')
	{
		output = var1*x + var2;
	}
	return output;
}


void positivita(double & a, double & b)
{
	double fa = function(a);
	double fb = function(b);
	bool isnegfirst = 0;
	if (fb < 0 && fa > 0)
	{
		isnegfirst = 0;
	}
	else if (fb > 0 && fa < 0)
	{
		isnegfirst = 1;
	}
	else
	{
		cout << "Both numbers are of the same sign or equal to 0. Insert them again: ";
		cin >> a >> b;
		positivita(a,b);
	}
	splitter(a, b, isnegfirst);
}

void splitter(double & a, double & b, bool & isnegfirst)
{
	double c = (a + b)/2.0;
	double fc = function(c);
	cout << "Range: [" << a << ", " << b << "]; " << "c = " << c << "; " << "f(c) = " << fc << "; " << endl;
	double output;
	if (fc == 0 || (fabs(a-b)<=Eps))
	{
		cout << setprecision(4) << std::fixed << "x = " << c << ", f(x) = 0\n";
		}
	else
	{
		if (isnegfirst == 1) // a<0, b>0
		{
			if (fc > 0) // a<0, c>0
			{
				splitter(a, c, isnegfirst);
			}
			else if (fc < 0) // c<0, b>0
			{
				splitter(c, b, isnegfirst);
			}
		}
		else if (isnegfirst == 0) // a>0, b<0
		{
			if (fc > 0) // c>0, b<0
			{
				splitter(c, b, isnegfirst);
			}
			else if (fc < 0)// a>0, c<0
			{ 
				splitter(a, c, isnegfirst);
			}
		}
	}
}
