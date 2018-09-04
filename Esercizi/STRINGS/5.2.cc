#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	fstream myin, myout;
	int q = 0, w = 0, e = 0, r = 0, t = 0, y = 0, u = 0, i = 0, o = 0, p = 0, a = 0, s = 0,
   		d = 0, f = 0, g = 0, h = 0, j = 0, k = 0, l = 0, z = 0, x = 0, c = 0, v = 0, b = 0, n = 0, m = 0;
   	char current;
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
	while (myin.get(current))
	{
        if (tolower(current) == 'q')
        {
        	q++;
        	cout << "Character q found!" << endl;
        }
        if (tolower(current) == 'w')
        {
        	w++;
        	cout << "Character w found!" << endl;
        }
        if (tolower(current) == 'e')
        {
        	e++;
        	cout << "Character e found!" << endl;
        }
        if (tolower(current) == 'r')
        {
        	r++;
        	cout << "Character r found!" << endl;
        }
        if (tolower(current) == 't')
        {
        	t++;
        	cout << "Character t found!" << endl;
        }
        if (tolower(current) == 'y')
        {
        	y++;
        	cout << "Character y found!" << endl;
        }
        if (tolower(current) == 'u')
        {
        	u++;
        	cout << "Character u found!" << endl;
        }
        if (tolower(current) == 'i')
        {
        	i++;
        	cout << "Character i found!" << endl;
        }
        if (tolower(current) == 'o')
        {
        	o++;
        	cout << "Character o found!" << endl;
        }
        if (tolower(current) == 'p')
        {
        	p++;
        	cout << "Character p found!" << endl;
        }
        if (tolower(current) == 'a')
        {
        	a++;
        	cout << "Character a found!" << endl;
        }
        if (tolower(current) == 's')
        {
        	s++;
        	cout << "Character s found!" << endl;
        }
        if (tolower(current) == 'd')
        {
        	d++;
        	cout << "Character d found!" << endl;
        }
        if (tolower(current) == 'f')
        {
        	f++;
        	cout << "Character f found!" << endl;
        }
        if (tolower(current) == 'g')
        {
        	g++;
        	cout << "Character g found!" << endl;
        }
        if (tolower(current) == 'h')
        {
        	h++;
        	cout << "Character h found!" << endl;
        }
        if (tolower(current) == 'j')
        {
        	j++;
        	cout << "Character j found!" << endl;
        }
        if (tolower(current) == 'k')
        {
        	k++;
        	cout << "Character k found!" << endl;
        }
        if (tolower(current) == 'l')
        {
        	l++;
        	cout << "Character l found!" << endl;
        }
        if (tolower(current) == 'z')
        {
        	z++;
        	cout << "Character z found!" << endl;
        }
        if (tolower(current) == 'x')
        {
        	x++;
        	cout << "Character x found!" << endl;
        }
        if (tolower(current) == 'c')
        {
        	c++;
        	cout << "Character c found!" << endl;
        }
        if (tolower(current) == 'v')
        {
        	v++;
        	cout << "Character v found!" << endl;
        }
        if (tolower(current) == 'b')
        {
        	b++;
        	cout << "Character b found!" << endl;
        }
        if (tolower(current) == 'n')
        {
        	n++;
        	cout << "Character n found!" << endl;
        }
        if (tolower(current) == 'm')
        {
        	m++;
        	cout << "Character m found!" << endl;
        }
  	}
	myout << "Character q: " << q << endl << "Character w: " << w << endl << "Character e: " << e << endl
		  << "Character r: " << r << endl << "Character t: " << t << endl << "Character y: " << y << endl
		  << "Character u: " << u << endl << "Character i: " << i << endl << "Character o: " << o << endl
		  << "Character p: " << p << endl << "Character a: " << a << endl << "Character s: " << s << endl
		  << "Character d: " << d << endl << "Character f: " << f << endl << "Character g: " << g << endl
		  << "Character h: " << h << endl << "Character j: " << j << endl << "Character k: " << k << endl
		  << "Character l: " << l << endl << "Character z: " << z << endl << "Character x: " << x << endl
		  << "Character c: " << c << endl << "Character v: " << v << endl << "Character b: " << b << endl
		  << "Character n: " << n << endl << "Character m: " << m << endl;
  	myin.close();
 	myout.close();
 	cout << "Output has been saved into " << argv[2] << endl;
	return 0;
}