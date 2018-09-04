#include <iostream>
#include <fstream>

using namespace std;

const int max_size = 256;

int main(int argc, char** argv)
{
	// sintassi: /a.out in out
	fstream myin, myout;
	char word[max_size];
	int counter = 0;
	myin.open(argv[1], ios::in);
	myout.open(argv[2], ios::out);
	while(!myin.eof())
	{
		counter = 0;
		myin >> word;
		for(int i = 0; (word[i] != '\0') && (i<max_size); i++)
		{
			if (word[i] == 'a')
			{
				counter++;
			}
			else if (word[i] == '\0')
			{
				cout << "CATASTROPHIC FAILURE" << endl;
			}
		}
		myout << counter << " ";
	}
}