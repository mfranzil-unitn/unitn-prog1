using namespace std;
#include <iostream> 

struct int_array { int ia[3]; };

int main () 
{

int_array sa = {{1,2,3}}, sb;
  
  sb = sa; //l'array viene copiato!

  cout << "sa = [";
  cout << sa.ia[0] << " " 
       << sa.ia[1] << " " 
       << sa.ia[2] << "]" << endl;
  cout << "sb = [";
  cout << sb.ia[0] << " " 
       << sb.ia[1] << " " 
       << sb.ia[2] << "]" << endl;

  sa.ia[0]=2;
  sa.ia[1]=3;
  sa.ia[2]=4;

  cout << "sa = [";
  cout << sa.ia[0] << " " 
       << sa.ia[1] << " " 
       << sa.ia[2] << "]" << endl;
  cout << "sb = [";
  cout << sb.ia[0] << " " 
       << sb.ia[1] << " " 
       << sb.ia[2] << "]" << endl;

  return 0;
}

