#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv)
{
	fstream myin;
	myin.open(argv[1], ios::in);
	char tmp[256];
	int date, anno, mese, anno_counter = 0, mese_counter = 0;
	cout << "Inserire il mese per cui ricercare il numero di nati: ";
	cin >> mese;
	cout << "Inserire l'anno per cui ricercare il numero di nati: ";
	cin >> anno;
	myin >> tmp >> tmp >> tmp >> date;
	while(!myin.eof())
	{
		if(date / 10000 == anno)
			anno_counter++;
		if((date-(date/10000)*10000)/100 == mese)
			mese_counter++;
	myin >> tmp >> tmp >> tmp >> date;
	}
	cout << "Il numero di nati nell'anno " << anno << " e' " << anno_counter << endl;
	cout << "Il numero di nati nel mese " << mese << " e' " << mese_counter << endl;
	return 0;
}