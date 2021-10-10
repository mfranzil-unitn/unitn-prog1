using namespace std;
#include <iostream>

// "cin loop"
// esempio da http://www.fredosaurus.com/notes-cpp/io/cinloop.html:

// The value of cin >> x is false if it was unable to read. There are
// several possible causes for a reading failure.

// EOF. When there is no more data, the EOF (End-Of-File) condition
// occurs. Every stream of input has an end so this is a normal
// event. It happens when reading a disk file and the end is
// reached. It's also possible to signal an EOF from the console by
// entering a special key combination, which depends on which
// operating system and C++ library you are using. Generally, you can
// use Control-Z (control-D in linux) followed by Enter to send an EOF
// from the keyboard. 

// Bad data. The read may fail if the data isn't formatted
// correctly. For example, when trying to read a floating-point
// temperature and the user types "zero", the read will fail.



int main () 
{
  int sum = 0;
  int x;

  while (cin >> x) {
    sum = sum + x;
  }

  cout << "Somma = " << sum << endl;

return 0;
}
