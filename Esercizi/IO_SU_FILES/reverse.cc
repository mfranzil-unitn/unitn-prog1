#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

const int maxsize = 80;

int main(int argc, char * argv[])
{
	fstream myin, myout;
	if (argc != 3)
	{
		cout << "Numero non valido di argomenti!" << endl;
		exit(0);
	}
	myin.open(argv[1], ios::in);
	/*if (myin.fail())
	{
		cerr << "Apertura file " << argv[2] << " fallita.\n";
		exit(0);
	} */
	char ** stack;
	char c;
	// bisogna farlo per ogni tipo di numero di righe
	int linen = 0;
	char temp[81];
	while(!myin.eof())
	{
		myin.getline(temp, 80);
		linen++;
	}
	cout << linen;
	myin.close();
	myin.open(argv[1], ios::in);
	myout.open(argv[2], ios::out);
	linen++;
	stack = new char*[linen];
	for(int i = 0; i < linen; i++)
	{
		stack[i] = new char[maxsize + 1];
		myin.getline(stack[i], 80);
	}
	for (int i = (linen - 1); i >= 0; i--)
	{
			myout << stack[i] << endl;
			delete[] stack[i];
	}
	myin.close();
	myout.close(); 
}