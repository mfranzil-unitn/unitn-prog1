using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>

int main (int argc, char * argv[]) 
{
  fstream myin,myout;
  char c;
  
  if (argc!=3) {
    cout << "Usage: ./a.out <sourcefile> <targetfile>\n";
    exit(0);
  }
  
  myin.open(argv[1],ios::in);
  if (myin.fail()) {
     cerr << "Il file " << argv[1] << " non esiste\n";
     exit(0);
  }

  myout.open(argv[2],ios::out);
  
  while (myin.get(c)) {
    myout.put(c);
  }
  myin.close();
  myout.close();
  return 0;
}

