#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main(int argc, char** argv)
{
	char parola[100], target = argv[1][0];
	int counter = 0;
	fstream myin, myapp;
	myin.open(argv[2], ios::in);
	myin >> parola; 
	while(!myin.eof())
	{
		for (int i = 1; counter == 0 && i < strlen(parola)-1; i++)
		{
			if (parola[i] == target && parola[i-1] == target)
				counter++;
		}
		myin >> parola;
	}
	clog << "Il numero di parole con il carattere '" << target << "' consecutivamente ripetuto è " << counter;
	myin.close();
	if (counter != 0)
	{
		myapp.open(argv[2], ios::out|ios::app);
		myapp << "\nPresenti parole con carattere consecutivamente ripetuto";
		myapp.close();
	}
	return 0;
}
