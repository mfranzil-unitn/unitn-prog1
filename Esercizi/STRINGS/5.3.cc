#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

const int MAXSIZE = 100000;

int main(int argc, char* argv[])
{
	fstream myin, myout;
	char c[MAXSIZE];
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
	while (!myin.fail())
	{
    	myin >> c;
    	myout << c << " ";
  	}
  	myin.close();
  	myout.close();
	cout << "Output has been saved into " << argv[2] << endl;
	return 0;
}