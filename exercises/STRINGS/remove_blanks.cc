using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>

const int dim = 80;

char line[dim];
char lineout[dim];

void remove_blanks(char * in,char * out) {
  int res = 1;
  
  int i,j;
  for (i=0,j=0;in[i]!='\0';i++) {
    if (!isspace(in[i]))
      out[j++] = in[i];
  }
  out[j]='\0';
}


int main()
{
  do {
    cin.getline(line, 80);
    remove_blanks(line,lineout);
    cout << lineout << "\n";
  } while (line[0]!='\0');
  return 0;
}
