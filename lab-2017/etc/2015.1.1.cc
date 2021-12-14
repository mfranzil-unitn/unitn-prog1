#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
	char str[31];
	int last;
	fstream myin, myout;
	myin.open(argv[1], ios::in);
	myout.open(argv[2], ios::out);
	myin >> str;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] + 'A' - 'a';
	}
	while (!myin.eof())
	{
		myout << str << " ";
		last = strlen(str)-1;
		if (str[last] == '.' || str[last] == '?' || str[last] == '!')
		{
			myin >> str;
			if (str[0] >= 'a' && str[0] <= 'z') 
				str[0] = str[0] + 'A' - 'a';
		}
		else
			myin >> str;
	}
	myin.close();
	myout.close();
	return 99;
}
