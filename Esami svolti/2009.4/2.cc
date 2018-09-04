#include <iostream>
#include <cstring>

using namespace std;

int f_rec(char* s, char c1, char c2);
int f_iter(char* s, char c1, char c2);

int main()
{
	const int dim = 100;
	char parola1[dim], parola2[dim];
	char c1, c2;
	cout << "Inserirsci la parola: ";
	cin >> parola1;
	cout << "Inserisci carattere 1: ";
	cin >> c1;
	cout << "Inserisci carattere 2: ";
	cin >> c2;
	strncpy(parola2, parola1, dim-1);
	parola2[dim-1] = '\0';
	int r1 = f_rec(parola1, c1, c2);
	int r2 = f_iter(parola2, c1, c2);
	cout << "f_rec: " << parola1 << ", " << r1 << endl;
	cout << "f_iter: " << parola2 << ", " << r2 << endl;
	return 0;
}

int f_rec(char * s, char c1, char c2)
{
	int res = -1;
	if (*s != '\0')
	{
		if (*s == c1)
		{
			*s = c2;
			res = 0;
		}
		else
		{
			int r = f_rec(s+1, c1, c2);
			if (r >=0)
				res = r+1;
		}
	}
	return res;
}

int f_iter(char* s, char c1, char c2)
{
	int res = 0;
	for(int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c1)
		{
			s[i] = c2;
			res++;
		}
	}
	return res;
}
