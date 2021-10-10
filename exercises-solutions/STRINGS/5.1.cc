#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	fstream myin, myout;
	char c;
	int vocali = 0, consonanti = 0;
	/*if (argc!=3)
	{
		cerr << "Usage: ./a.out <source> <target>\n";
		exit(0);
	} */
	myin.open(argv[1], ios::in);
	if (myin.fail())
	{
		cerr << "Il file " << argv[1] << " non esiste\n";
		exit(0);
	}
	myout.open(argv[2], ios::out);
	while (myin.get(c))
	{
    	if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u' )
		{
			vocali++;
		}
		else if (tolower(c) == 'b' || tolower(c) == 'g' || tolower(c) == 'l' || tolower(c) == 'q' || tolower(c) == 'v'
			  || tolower(c) == 'c' || tolower(c) == 'h' || tolower(c) == 'm' || tolower(c) == 'r' || tolower(c) == 'w'
			  || tolower(c) == 'd' || tolower(c) == 'j' || tolower(c) == 'n' || tolower(c) == 's' || tolower(c) == 'x'
			  || tolower(c) == 'f' || tolower(c) == 'k' || tolower(c) == 'p' || tolower(c) == 't' || tolower(c) == 'y'
			  || tolower(c) == 'z' )
		{
			consonanti++;
		}
  	}
  	myout << "Found " << vocali << "vowels and " << consonanti << "consonants.\n";
  	myin.close();
 	myout.close();
 	cout << "Output has been saved into " << argv[2] << endl;
	return 0;
}