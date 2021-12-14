#include <iostream> 
using namespace std;

int main()
{
  bool a=0;
  bool b=1;
  cout << "Tabella di verità:\nx\t0\t0\t1\t1\ny\t0\t1\t0\t1\n";
  cout << "x&&y\t" << a&&a << "\t" << a&&b << "\t" << b&&a << "\t" << b&&b << "\n";
  cout << "x||y\t" << a||a << "\t" << a||b << "\t" << b||a << "\t" << b||b << "\n";
  cout << "!x\t" << !a << "\t" << !a << "\t" << !b << "\t" << !b << "\n";
  return (0);
}

