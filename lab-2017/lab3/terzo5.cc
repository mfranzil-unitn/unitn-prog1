#include <iostream>
using namespace std;

int main()
{
	char a;
	cout << "Inserisci il carattere TOP SECRET da encryptare: ";
	cin >> a;
	float b = a;
	b = (b-2.244)*9.43;
	b = (b/9.43)+2.44;
	a = b;
	out << "Encryptazione in corso...\nDecrittazione in corso...\nFinito!\n" << a << endl;
	 
return (0);
}
