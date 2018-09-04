#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const int MAX_SIZE = 255;

int main(int argc, char** argv)
{
	if (argc != 3)
	{
		cerr << "Argomenti non validi! " << endl;
		exit(EXIT_FAILURE);
	}
	fstream myin, myout;
	myin.open(argv[1], ios::in);
	myout.open(argv[2], ios::out);
	if (myin.fail() || myout.fail())
	{
		cerr << "File inesistente!" << endl;
		exit(EXIT_FAILURE);
	}
	char c, string[MAX_SIZE+1], greatest[MAX_SIZE+1];
	int i = 0, max = 0;
	myin.get(c);
	do
	{
		if (c == '\n')
		{
			if (i > max)
			{
				max = i-1;
				while(i >= 0)
				{
					greatest[i] = string[i];
					i--;
				}
			}
			else
				i = 0;
		}
		else if (c != '\0')
		{
			string[i] = c;
			i++;
		}
		myout << c;
		myin.get(c);
	} while(!myin.fail());
	cout << max << endl << greatest << endl;
}