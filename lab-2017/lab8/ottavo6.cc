#include <iostream>
#include <iomanip>

using namespace std;
const int SIZE = 3;

void stampamatrice(int [][SIZE]);
double media(int [][SIZE]);

int main() {
	int a [SIZE][SIZE] = {{0, 1, 3}, {4, 5, 6}, {8, 10, 12}};
	stampamatrice(a);
	cout << "Media: " << media(a) << endl;
	return 0;
}

void stampamatrice(int a[SIZE][SIZE])
{
	for (int i=0;i<SIZE;i++) {
		cout << setw(8) << "|";
		for (int j=0;j<SIZE;j++) {
			cout << a[i][j] << "\t";
		}
		cout << " |" << endl;
	}
}

double media(int a[SIZE][SIZE])
{
	double output = 0;
	for (int i=0;i<SIZE;i++) {
		for (int j=0;j<SIZE;j++) {
			output += a[i][j];
		}
	}
	output = (output/(SIZE*SIZE));
	return output;
}
