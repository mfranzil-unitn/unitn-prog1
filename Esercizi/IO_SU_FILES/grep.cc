#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <iomanip>

using namespace std;

const int MAXSIZE = 100000;

void contapos(char a[], int & righe, int & colonne, int i, char * argv[]);

int main(int argc, char* argv[])
{
	fstream myin;
	char c[MAXSIZE], t[MAXSIZE];
	int i = 0, counter = 0; // per il ciclo while
	const void * px;
	myin.open(argv[1], ios::in);
	cout << "String? ";
	cin >> t;
	while(!myin.fail())
	{
		myin >> c;
		px = strstr(c, t);
		if (px != NULL)
		{
			cout << "The word " << c << " was found as the word #" << i << " of the text." << endl;
			counter++;
		}
		i++; 
	}
	cout << endl << "String \"" << t << "\" found " << counter << " times. " << endl;
 	myin.close();
 	return 0;
}