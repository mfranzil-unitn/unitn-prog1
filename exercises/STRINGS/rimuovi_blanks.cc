using namespace std;
#include <iostream>
#include <cstdlib>

const int dim = 80; 
  char line[dim];
  char * nline;


int remove_blanks(char * line1, char * line2) {
  int res = 1;
  int i1=0,i2=0;
  line2 = new char[dim];
  for (i1=0;line1[i1]!='\0';i1++) {
    if (!isspace(line1[i1])) 
      line2[i2++]=line1[i1];
    else
      res = 0;
  }
  return res;
}


int main()
{
  int letto;
  do {
    letto=cin.getline(line, 80);
//     remove_blanks(line,nline);
    cout << line;
  } while (letto);
  return 0;
}
