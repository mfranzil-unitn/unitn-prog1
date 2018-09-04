#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(int argc, char** argv)
{
	fstream myin, myout;
	myin.open(argv[1], ios::in);
	myout.open(argv[2], ios::out);
	char c;
	myin.get(c);
	int i = 0;
	while(i <= 100 && !myin.eof())
	{
		i++;
		if (c != *argv[3])
			myout << c;
	myin.get(c);
	}
	return 0;
}