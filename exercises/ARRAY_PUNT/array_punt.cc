using namespace std;
#include <iostream>


void print_array(int * v,int dim,char * name)
{
  int i;
  cout << name << ":= [";
  for (i=0;i<dim;i++)
    cout << v[i] << " ";
  cout << "]\n";
}

void print_pvalue(int *p,char * name)
{
  cout << "*" << name << ":= " << *p << endl;
}

void print_p1p2_wait(int *p1,char * name1,int *p2,char * name2)
{
  char c;
  cout << "*" << name1 << ":= " << *p1 << endl;
  cout << "*" << name2 << ":= " << *p2 << endl;
  cout << endl;
  cin.get(c);
}


int main () 
{
  const int dim=10;
  int v1[dim] = {0,1,2,3,4,5,6,7,8,9};
  int v2[dim] = {0,2,4,6,8,10,12,14,16,18};
  int *p1=v1;
  int *p2=v2;

print_array(v1,dim,"v1");print_array(v2,dim,"v2");
print_p1p2_wait(p1,"p1",p2,"p2");
 
  p1+=3;
  p2+=3;
print_p1p2_wait(p1,"p1",p2,"p2");

  p2=p1+4;
  p1++;
cout << "p2-p1= " << p2-p1 << endl;
cout << "pos(p1)= " << p1-v1 << endl;
cout << "pos(p2)= " << p2-v1 << endl;
print_p1p2_wait(p1,"p1",p2,"p2");

 *p1=20;
 *p2=40;
cout << "p2-p1= " << p2-p1 << endl;
cout << "pos(p1)= " << p1-v1 << endl;
cout << "pos(p2)= " << p2-v1 << endl;
print_array(v1,dim,"v1");print_array(v2,dim,"v2");
print_p1p2_wait(p1,"p1",p2,"p2");
  
 p1 =&v2[4];
 p2 =&v2[7];
cout << "p2-p1= " << p2-p1 << endl;
cout << "pos(p1)= " << p1-v2 << endl;
cout << "pos(p2)= " << p2-v2 << endl;
print_array(v1,dim,"v1");print_array(v2,dim,"v2");
print_p1p2_wait(p1,"p1",p2,"p2");
 

return 0;
}
