#include <iostream>
#include <fstream>
#include <cctype>
#include <cstdlib>

using namespace std;

char encryptwrap(char * argv[], char c, char pass[]);
char encrypt(char * argv[], char c, char pass[], int counter);

int main (int argc, char * argv[]) 
{
	fstream myin,myout;
	char c, pass[100];
	if (argc!=4)
	{
		cout << "Usage: ./a.out <sourcefile> <charactermap> <targetfile>\n";
		exit(0);
	}
	myin.open(argv[1],ios::in);
	if (myin.fail())
	{
		 cerr << "Il file " << argv[1] << " non esiste\n";
		 exit(0);
	}
	myout.open(argv[3],ios::out);
	while (myin.get(c))
	{
		if (tolower(isalpha(c)))
		{
			myout.put(encryptwrap(argv, c, pass));
		}
		else
		{
			myout.put(c);
			cerr << endl;
		}
	}
	myin.close();
	myout.close();
	return 0;
}

char encryptwrap(char * argv[], char c, char pass[])
{
	return encrypt(argv, c, pass, 0);
}

char encrypt(char * argv[], char c, char pass[], int counter)
{	
	char result;
	fstream enc;
	enc.open(argv[2],ios::in);
	enc.getline(pass, counter+4);
	if (pass[counter] == tolower(c))
	{
		enc.close();
		cerr << pass[counter] << " > " << pass[counter+2] << "; ";
		result = pass[counter+2];
	}
	else
	{
		enc.close();
		result = encrypt(argv, c, pass, counter+4);
	}
	return result;
}