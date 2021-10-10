// esempio di composizione di funzione
// calcolo del minimo e massimo tra quattro interi

using namespace std;
#include <iostream>


int mymax(int x, int y)
{
cerr << "  mymax(" << x << "," << y << ") ----------\n";
cerr << "   &x = " << (long) &x << ", dim= " << sizeof(x) << endl;
cerr << "   &y = " << (long) &y << ", dim= " << sizeof(y) << endl;

  if (x < y) 
    return y;
  else 
    return x;
}


int mymin(int x, int y)
{
cerr << "  mymin(" << x << "," << y << ") ----------\n";
cerr << "   &x = " << (long) &x << ", dim= " << sizeof(x) << endl;
cerr << "   &y = " << (long) &y << ", dim= " << sizeof(y) << endl;
  if (x > y) 
    return y;
  else 
    return x;
}

int main()
{
int n1, n2, n3, n4, m1, m2;
cerr << "&n1 = " << (long) &n1 << ", dim= " << sizeof(n1) << endl;
cerr << "&n2 = " << (long) &n2 << ", dim= " << sizeof(n1) << endl;
cerr << "&n3 = " << (long) &n3 << ", dim= " << sizeof(n1) << endl;
cerr << "&n4 = " << (long) &n4 << ", dim= " << sizeof(n1) << endl;

    cout << "Dammi quattro interi :";
    cin >> n1 >> n2 >> n3 >> n4;
    m1 =  mymax(mymax(n1,n2),mymax(n3,n4));
    m2 =  mymin(mymin(n1,n2),mymin(n3,n4));
    
    cout << "Max: " << m1 << ", Min: " << m2 << endl;
return 0;
}
