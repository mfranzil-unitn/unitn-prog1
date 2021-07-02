#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const int max_size = 30;

int main(int argc, char** argv)
{
	fstream myin, myout;
	char word[max_size+1];
	myin.open(argv[1], ios::in);
	myout.open(argv[2], ios::out);
	myin >> word;
	if (word[0] > 'a' && word[0] < 'z')
		word[0] += 'A' - 'a';
	while(!myin.eof())
	{
		myout << word << " ";
		if (word[strlen(word)-1] == '.'
		 || word[strlen(word)-1] == '?'
		 || word[strlen(word)-1] == '!')
		{
			myin >> word;
			if (word[0] > 'a' && word[0] < 'z')
				word[0] += 'A' - 'a';
		}
		else
			myin >> word;
	}
	return 0;
}

	
