#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

const int maxsize = 80;

int main(int argc, char * argv[])
{
	fstream myin, myout;
	if (argc != 4)
	{
		cout << "Numero non valido di argomenti!" << endl;
		exit(0);
	}
	myin.open(argv[1], ios::in);
	myout.open(argv[3], ios::out);
	/*if (myin.fail())
	{
		cerr << "Apertura file " << argv[2] << " fallita.\n";
		exit(0);
	} */
	char ** stack;
	char c;
	const int linen = atoi(argv[2]);
	stack = new char*[linen];
	for(int i = 0; i < linen; i++)
	{
		stack[i] = new char[maxsize + 1];
		myin.getline(stack[i], 80);
	}
	for (int i = (linen - 1); i >= 0; i--)
	{
		if (i%2 != 0)
		{
			myout << stack[i] << endl;
		}
		delete[] stack[i];
	}
}