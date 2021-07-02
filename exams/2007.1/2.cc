#include <iostream>
#include <fstream>

using namespace std;

const int MAX_SIZE = 1000;

int main(int argc, char** argv)
{
	fstream file1, file2;
	file1.open(argv[1], ios::out|ios::app);
	file2.open(argv[2], ios::in);
	char buffer[MAX_SIZE+1];
	int i = 0;
	file2.getline(buffer, 1000);
	while(!file2.eof())
	{
		i++;
		if (i%2 == 0)
		{
			file1 << endl << buffer;
		}
		file2.getline(buffer, 1000);
	}
	return 0;
}