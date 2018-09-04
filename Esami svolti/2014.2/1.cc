#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

using namespace std;

const int MAX_SIZE = 80;
bool word_check(char* riga);
bool at_check(char* riga);

int main(int argc, char** argv)
{
	if (argc != 3)
	{
		cerr << "Invalid number of parameters. Terminating..." << endl;
		exit(EXIT_FAILURE);
	}
	fstream myin, myout;
	char riga[MAX_SIZE+1];
	myin.open(argv[1], ios::in);
	while(!myin.eof())
	{
		myin >> riga;
		if (word_check(riga))
		{
			myout << riga << endl;
		}
	}
}

bool word_check(char* riga)
{
	bool res;
	if ( strlen(riga) > 1
			&& riga[0] != '.'
			&& riga[strlen(riga)-1] != '.'
			&& at_check(riga))
	{
		for (int i = 0; (i < strlen(riga)) && res != false; i++)
		{
			if ((riga[i] >= 'a' && riga[i] <= 'z')
				&& (riga[i] >= 'A' && riga[i] <= 'Z')
				&& (riga[i] >= '0' && riga[i] <= '9')
				&& (riga[i] == '.')
				&& (riga[i] == '_'))
				res = true;
			else
				res = false;
		}
	}
	return res;
}

bool at_check(char* riga)
{
	bool res;
	char tmp;
	for (int i = 0; (riga[i] != '@') && (riga[i] != '\0'); i++)
		tmp = riga[i];
	if (tmp == '@')
		res = true;
	else
		res = false;
	return res;
}