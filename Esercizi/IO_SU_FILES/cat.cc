#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>

using namespace std;

// const long long int MAXSIZE = 1000000000;

int main(int argc, char* argv[])
{
	fstream myin;
	char c;
	myin.open(argv[1], ios::in);
	if (myin.fail())
	{
		cerr << "Il file " << argv[1] << " non esiste\n";
		exit(0);
	}
	cout << endl << endl << endl << "FILENAME: " << argv[1] << endl << endl;
	while(myin.get(c))
	{
		cout.put(c);
	}
 	myin.close();
	return 0;
}