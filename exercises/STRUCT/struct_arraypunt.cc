using namespace std;
#include <iostream> 

struct int_array { 
  int * ia; 
};

int main () 
{

  int_array sa, sb;
  sa.ia = new int[3];
  sb.ia = new int[3];
   
  sa.ia[0]=1;
  sa.ia[1]=2;
  sa.ia[2]=3;
  
  sb = sa; //il puntatore viene copiato

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

  delete [] sa.ia; // OK
  //delete [] sb.ia; // ERRORE
  
  return 0;
}

