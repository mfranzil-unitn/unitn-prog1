#include <iostream>
#include <fstream>

using namespace std;

int main (int argc, char** argv)
{
	fstream file1, file2, myout;
	char parola[256];
	file1.open(argv[1], ios::in);
	file2.open(argv[2], ios::in);
	myout.open(argv[3], ios::out);
	while(!file1.eof() || !file2.eof())
	{	if(!file1.eof())
		{
			file1 >> parola;
			myout << parola << " ";
		}
		if(!file2.eof())
		{
			file2 >> parola;
			myout << parola << " ";
		}
	}
	file1.close();
	file2.close();
	myout.close();
	return 0;
}
