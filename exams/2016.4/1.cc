#include <fstream>
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

const int maxsize = 255;

int main(int argc, char** argv)
{
	fstream file1, file2, output;
	if (argc != 4)
	{
		cout << "Invalid number of parameters. Terminating..." << endl;
		exit(0); // ./a.out file1 file2 output
	}
	// primo file
	file1.open(argv[1], ios::in);
	char word[maxsize+1];
	int linen, i = 0; 
	file1 >> linen; // sbarazziamoci del numero 
	char ** primo = new char* [linen];
	while(!file1.eof())
	{
		file1 >> word;
		primo[i] = new char[strlen(word) + 1];
		strcpy(primo[i], word);
		i++;
	}
	file1.close();
	// secondo file
	file2.open(argv[2], ios::in);
	output.open(argv[3], ios::out);
	file2 >> i;
	i = 0; // ricomincia il conto
	while(!file2.eof())
	{
		file2 >> word;
		if (search(word, 
		{
			output << word << endl;
			i++;
		}
	}
	file2.close();
	output.close();
	return 0;
}