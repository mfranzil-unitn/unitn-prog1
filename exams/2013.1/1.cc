#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(int argc, char** argv)
{
	// sintassi: ./a.out in out N
	if (argc != 4)
	{
		cerr << "Invalid number of parameters!" << endl;
		exit(EXIT_FAILURE);
	}
	fstream myin, myout;
	myin.open(argv[1], ios::in);
	myout.open(argv[2], ios::out);
	int charn = atoi(argv[3]), i = 0;
	char c;
	while(i < charn && !myin.eof())
	{
		myin.get(c);
		if (c <= 'z' && c >= 'a')
			c = (c - 'a' + 3)%26 + 'a';
		else if (c <= 'Z' && c >= 'A')
			c = (c - 'A' + 3)%26 + 'A';
		myout << c;
		i++;
	}
	myin.close();
	myout.close();
	return 0;
}
